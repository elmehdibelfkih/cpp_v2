/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 08:33:57 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/26 13:03:26 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
private:
    size_t i;
    T* arr;
public:
    Array();
    ~Array();
    Array(const Array& obj); 
    Array& operator=(const Array& obj);
    T& operator[](unsigned int i);
    
    Array(unsigned int i);
    size_t size() const;
};

#include "Array.hpp"


template <typename T>
Array<T>::Array()
{
    this->i = 0;
    this->arr = NULL;
}

template <typename T>
Array<T>::Array(unsigned int i)
{
    this->i = i;
    this->arr = new T[i];
}

template <typename T>
Array<T>::~Array()
{
    delete[] this->arr;
}

template <typename T>
size_t Array<T>::size() const
{
    return this->i;
}

template <typename T>
Array<T>::Array(const Array& obj) : i(obj.size()), arr(new T[obj.size()])
{
    for (size_t j = 0; j < obj.i; j++)
        this->arr[j] = obj.arr[j];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& obj)
{
    if (this != &obj)
    {
        this->i = obj.size();
        delete[] this->arr;
        this->arr = new T[i];
        for (size_t j = 0; j < i; j++)
            this->arr[j] = obj.arr[j];
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int i)
{
    if (i < 0 || i >= this->i)
        throw std::out_of_range("index out of range");
    else
        return this->arr[i];
}