/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_second.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:10:15 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/20 21:50:30 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_second(t_list	**stack_a, t_list	**stack_b, int digit)
{
	t_list	*range;
	t_list	*start;

	range = NULL;
	range = select_range(stack_b, digit, 0);
	start = range;
	while (ft_lstsize(range))
	{
		r_sm(stack_a, stack_b, digit, range->content);
		range = range->next;
	}
	ft_lstclear_int(&start, ft_del);
}
