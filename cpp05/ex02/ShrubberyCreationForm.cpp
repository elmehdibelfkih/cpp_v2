/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm::.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 05:50:54 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/20 06:25:38 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("", 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

////////////////////////////////////////////////////////////////////////

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)  : AForm(target, 145, 137){}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::string outFile;

    outFile = this->getTarget() + "_shrubbery";
    std::ofstream otpfile(outFile.c_str());
    if (!otpfile.is_open())
    {
        std::cerr << "Error opening file: " << outFile << std::endl;
        return ;
    }
    otpfile << "      ^                 ^     \n";
    otpfile << "     ^^^               ^^^    \n";
    otpfile << "    ^^^^^             ^^^^^   \n";
    otpfile << "   ^^^^^^^           ^^^^^^^  \n";
    otpfile << "  ^^^^^^^^^         ^^^^^^^^^ \n";
    otpfile << " ^^^^^^^^^^^       ^^^^^^^^^^^\n";
    otpfile << "    |   |             |   |   \n";
    otpfile.close();
    return ;
}
