/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 01:55:05 by aminoru-          #+#    #+#             */
/*   Updated: 2022/09/21 02:06:17 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	long_atoi(const char *str)
{
	int		sig;
	long	res;

	sig = 1;
	res = 0;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sig *= -1;
		str++;
	}
	while (ft_isdigit((int)*str))
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (res * sig);
}
