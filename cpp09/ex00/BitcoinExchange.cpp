/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:17:54 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/09/25 06:21:06 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::cout << "no data base" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj)
{
    *this = obj;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj)
{
    if (this != &obj)
        this->_data = obj._data;
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
    this->_data.clear();
}

////////////////////////////////////////////////////////////////////////////////

BitcoinExchange::BitcoinExchange(std::string FileDataBase)
{
    std::ifstream data_base;
    std::string line;
    std::string Mfloat;
    char *end;

    data_base.open(FileDataBase.c_str());
    std::getline(data_base, line);
    while (std::getline(data_base, line))
    {
        size_t pos = line.find(",");
        Mfloat = line.substr(pos + 1, std::numeric_limits<size_t>::max());
        this->_data[line.substr(0, pos)] = std::strtod(Mfloat.c_str(), &end);
    }
    
}

void BitcoinExchange::output(std::string file_name)
{
    std::ifstream inputFile;
    std::string line;
    std::string Mtime;
    std::string Mval;
    size_t pos;

    inputFile.open(file_name.c_str());
    if (!inputFile.is_open())
    {
        std::cout <<"Error: could not open file" << std::endl;
        return;
    }

    std::getline(inputFile, line);
    line = this->trimSpacesAndTabs(line);
    if (line.compare("date | value") != 0)
    {
        std::cout << "Error: Invalid file format => " << line << std::endl;
        return;
    }
    while (std::getline(inputFile, line))
    {
        pos = line.find("|");
        if (pos == std::string::npos)
            std::cout << "Error: bad input => " << line << std::endl;
        else
        {
            Mtime = this->trimSpacesAndTabs(line.substr(0, pos));
            Mval = this->trimSpacesAndTabs(line.substr(pos + 1, std::numeric_limits<size_t>::max()));
            this->trimSpacesAndTabs(line);
            std::map<std::string, double>::iterator it;
            if (Mval == "")
            {
                std::cout << "Error: bad input => " << line << std::endl;
                continue;
            }
            it = this->_data.lower_bound(Mtime);
            if (this->_data.begin() == it && it->first != Mtime)
            {
                std::cout << "Error: bad input =>" <<  Mtime <<std::endl;
                continue;
            }
            if (it->first != Mtime)
                it--;
            if (it == this->_data.end())
                it--;
            if (this->checkVal(Mval) >= 0 && this->checkTime(Mtime))
                std::cout << Mtime << " => " << Mval << " = " << it->second * this->checkVal(Mval) << std::endl;
        }   
    }
}

float BitcoinExchange::checkVal(std::string Mval)
{
    char *end = NULL;
    double val = std::strtod(Mval.c_str(), &end);
    if (std::strcmp("", end) != 0)
        return std::cout << "Error: bad input => " << Mval << std::endl, -1;
    if (std::strcmp("", end) != 0)
        return std::cout << "Error: bad input => " << Mval << std::endl, -1;
    if (val > 1000)
        return std::cout << "Error: too large a number." << std::endl, -1;
    if (val < 0)
        return std::cout << "Error: not a positive number." << std::endl, -1;
    else
        return val;
}

bool BitcoinExchange::checkTime(std::string Mtime)
{
    char *end = NULL;
    int y;
    int m;
    int d;

    if (Mtime > this->getCurrentTimeString())
        return std::cout << "Error: bad input: => " << Mtime << std::endl, false;
    y = std::strtod(Mtime.substr(0, 4).c_str(), &end);
    if (std::strcmp("", end) != 0 || y < 2009)
        return std::cout << "Error: bad input => " << Mtime << std::endl, false;
    m = std::strtod(Mtime.substr(5, 2).c_str(), &end);
    if (std::strcmp("", end) != 0 || m < 1 || m > 12)
        return std::cout << "Error: bad input => " << Mtime << std::endl, false;
    d = std::strtod(Mtime.substr(8, 2).c_str(), &end);
    if (std::strcmp("", end) != 0 || d < 1 || d > 31)
        return std::cout << "Error: bad input => " << Mtime << std::endl, false;
    if (y == 2009 && m == 1 && d == 1)
        return std::cout << "Error: bad input => " << Mtime << std::endl, false;
    if (m == 2)
    {
        if (((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) && d > 29)
            return std::cout << "Error: bad input => " << Mtime << std::endl, false;
        else if (!((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) && d > 28)
            return std::cout << "Error: bad input => " << Mtime << std::endl, false;
    }
    if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
        return std::cout << "Error: bad input => " << Mtime << std::endl, false;
    return true;
}

std::string BitcoinExchange::trimSpacesAndTabs(const std::string &input) 
{
    std::string::size_type start = 0;
    std::string::size_type end = input.length();
    while (start < end && (input[start] == ' ' || input[start] == '	')) {++start;}
    while (end > start && (input[end - 1] == ' ' || input[end - 1] == '	')) {--end;}
    return input.substr(start, end - start);
}

std::string BitcoinExchange::getCurrentTimeString() 
{
    std::time_t currentTime = std::time(NULL);
    std::tm *localTime = std::localtime(&currentTime);
    char buffer[11];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d", localTime);
    return std::string(buffer);
}