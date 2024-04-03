/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:17:54 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/04/03 18:33:22 by ebelfkih         ###   ########.fr       */
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

    data_base.open(FileDataBase);
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

    inputFile.open(file_name);
    std::getline(inputFile, line);
    if (line.compare("date | value") != 0)
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return;
    }
    while (std::getline(inputFile, line))
    {
        pos = line.find("|");
        if (pos == std::string::npos)
            std::cout << "Error: bad input => " << line << std::endl;
        else
        {
            Mtime = line.substr(0, pos - 1);
            Mval = line.substr(pos + 2, std::numeric_limits<size_t>::max());
            if (this->checkVal(Mval) > 0 && this->checkTime(Mtime))
                std::cout << Mtime << " => " << Mval << " = " << this->_data[Mtime] * this->checkVal(Mval) << std::endl;
        }   
    }
}

float BitcoinExchange::checkVal(std::string Mval)
{
    char *end = NULL;
    double val = std::strtod(Mval.c_str(), &end);
    if (std::strcmp("", end) != 0)
    {
        return std::cout << "Error: bad input => " << Mval << std::endl, -1;
    }
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

    if (Mtime.length() != 10 )
        return std::cout << "Error: bad input => " << Mtime << std::endl, false;
    y = std::strtod(Mtime.substr(0, 4).c_str(), &end);
    if (std::strcmp("", end) != 0 || y < 2009)
        return std::cout << "Error: bad input => " << Mtime << std::endl, false;
    m = std::strtod(Mtime.substr(5, 2).c_str(), &end);
    if (std::strcmp("", end) != 0 || m < 1 || m > 12)
        return std::cout << "Error: bad input => " << Mtime << std::endl, false;
    d = std::strtod(Mtime.substr(8, 2).c_str(), &end);
    if (std::strcmp("", end) != 0 || d < 1 || d > 31)
        return std::cout << "Error: bad input => " << Mtime << std::endl, false;
    if (y == 2009 && m == 1 && d == 2)
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

