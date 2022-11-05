/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tag_min_ref.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:19:05 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/20 18:19:24 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	tag_min_ref(t_list *stack_a, int ref)
{
	t_list	*tmp;
	int		count;
	int		len;

	count = 0;
	tmp = stack_a;
	len = ft_lstsize(stack_a);
	while (count < len)
	{
		if (tmp->index == -1 && ref > tmp->content)
			ref = tmp->content;
		tmp = tmp->next;
		count++;
	}
	return (ref);
}
