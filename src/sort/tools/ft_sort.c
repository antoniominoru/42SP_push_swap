/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:19:36 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/05 21:31:05 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort(t_list	*stack)
{
	int		size;
	int		i;

	i = 1;
	size = ft_lstsize(stack);
	while (i < size)
	{
		if (stack->content > stack->next->content)
			return (0);
		stack = stack->next;
		i++;
	}		
	return (1);
}
