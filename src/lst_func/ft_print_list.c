/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 01:05:32 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/17 18:27:51 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_list(t_list *stack)
{
	while (stack)
	{
		ft_printf("ID: %i - %i\n", stack->index, stack->content);
		stack = stack->next;
	}
	ft_printf("\n");
}
