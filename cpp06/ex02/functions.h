/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 02:00:43 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/26 02:54:38 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
