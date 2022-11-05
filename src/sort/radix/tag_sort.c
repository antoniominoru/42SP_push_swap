/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tag_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:06:17 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/20 18:20:26 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tag_sort(t_list **stack_a)
{
	int	len;
	int	ref;
	int	index;

	index = 0;
	len = ft_lstsize(*stack_a);
	while (index < len)
	{
		ref = tag_ref(*stack_a);
		ref = tag_min_ref(*stack_a, ref);
		tag_set(*stack_a, ref, index);
		index++;
	}	
}
