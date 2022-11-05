/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 01:25:24 by aminoru-          #+#    #+#             */
/*   Updated: 2022/09/30 12:35:30 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	perror_exit(char *msg)
{
	ft_printf("Error\n%s\n", msg);
	exit(1);
}

void	perror_exit_standard(void)
{
	write(1, "Error\n", 6);
	exit(1);
}
