/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:19:35 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/09/24 21:10:36 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <limits>
#include <map>


class BitcoinExchange
{
private:
    std::map<std::string, double> _data;
    bool checkTime(std::string Mtime);
    float checkVal(std::string Mval);
    std::string trimSpacesAndTabs(const std::string &input);
    std::string getCurrentTimeString();
public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& obj);
    BitcoinExchange& operator=(const BitcoinExchange& obj);
    ~BitcoinExchange();

    BitcoinExchange(std::string database);
    void output(std::string file_name);
};