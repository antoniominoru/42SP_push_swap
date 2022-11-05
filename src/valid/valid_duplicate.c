/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:15:43 by aminoru-          #+#    #+#             */
/*   Updated: 2022/09/21 02:26:54 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	valid_duplicate(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 1 + i;
		while (argv[j])
		{
			if (long_atoi(argv[i]) == long_atoi(argv[j]))
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}
