/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_max_limit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:16:41 by aminoru-          #+#    #+#             */
/*   Updated: 2022/09/21 01:55:34 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	valid_max_limit(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (long_atoi(argv[i]) > 2147483647)
			return (-1);
		if (long_atoi(argv[i]) < -2147483648)
			return (-1);
		i++;
	}
	return (0);
}
