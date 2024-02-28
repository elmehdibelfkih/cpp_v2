#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int g_fd;

void put_err(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	write(2, str, i);
}

void ft_execute(char **av, int i, char **envp)
{
	int st;
	int fd[2];
	int pid;
	int next = 0;

	if (av[i] && !strcmp(av[i], "|"))
		next = 1;
	if (av[i] == *av)
		return ;
	pipe(fd);
	pid = fork();
	if (pid == 0)
	{
		dup2(g_fd, 0);
		close(fd[0]);
		av[i] = 0;
		if (next)
			dup2(fd[1] , 1);
		if (g_fd != 0)
			close (g_fd);
		close (fd[1]);
		if (execve(*av, av, envp) == -1)
		{
			put_err("error: cannot execute ");
			put_err(*av);
			put_err("\n");
			exit (0);
		}
	}
	else
	{
		close (fd[1]);
		waitpid(pid, &st, 0);
		if (g_fd != 0)
			close (g_fd);
		if (next)
			g_fd = dup(fd[0]);
		close (fd[0]);
	}
	return ;
}

int cdb(char **av)
{
	if (chdir(av[1]) == -1)
	{
		put_err("error: cd: cannot change directory to ");
		put_err(av[1]);
		put_err("\n");
	}
	return 0;
}

int main(int ac, char **av, char **envp)
{
	if (ac == 1)
		return (0);
	int i = 1;
	av[ac] = 0;
	while (av[i - 1] && av[i])
	{
		av = av + i;
		i = 0;
		while (av[i] && strcmp(av[i], "|") != 0 && strcmp(av[i], ";") != 0)
			i++;
		if (!strcmp(*av, "cd"))
			cdb(av);
		else
			ft_execute(av, i, envp);
		i++;
	}
	return (0);
}

