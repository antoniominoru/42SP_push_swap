/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_first.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:08:44 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/20 21:49:31 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_first(t_list	**stack_a, t_list	**stack_b, int digit)
{
	t_list	*range;
	t_list	*start;

	range = NULL;
	range = select_range(stack_a, digit, 1);
	start = range;
	while (ft_lstsize(range))
	{	
		r_fm(stack_a, stack_b, digit, range->content);
		range = range->next;
	}
	ft_lstclear_int(&start, ft_del);
}
