/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:08:59 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/25 22:57:09 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	valid_all(int argc, char *argv[])
{
	if (valid_is_int(argc, argv) < 0)
		perror_exit_standard();
	if (valid_duplicate(argc, argv) < 0)
		perror_exit_standard();
	if (valid_max_limit(argc, argv) < 0)
		perror_exit_standard();
}
