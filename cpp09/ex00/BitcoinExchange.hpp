/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:19:35 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/04/04 02:31:21 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <map>


class BitcoinExchange
{
private:
    std::map<std::string, double> _data;
    bool checkTime(std::string Mtime);
    float checkVal(std::string Mval);
public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& obj);
    BitcoinExchange& operator=(const BitcoinExchange& obj);
    ~BitcoinExchange();

    BitcoinExchange(std::string database);
    void output(std::string file_name);
};