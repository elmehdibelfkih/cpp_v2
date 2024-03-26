/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 07:28:04 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/26 01:23:12 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int main() {
    Data mm;

    mm.i = 10;
    std::cout << "adress of struct: " << &mm<< " value :" << mm.i << std::endl;
  
    // Serialize
    uintptr_t test = Serializer::serialize(&mm);
    std::cout << "uinptr : " << test << std::endl;

    // Deserialize
    Data *yy = Serializer::deserialize(test);
    std::cout << "Data* : " << yy << std::endl;

    return 0;
}
