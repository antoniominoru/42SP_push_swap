/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tag_ref.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:18:15 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/20 18:18:31 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	tag_ref(t_list *stack_a)
{
	t_list	*tmp;
	int		ref;
	int		count;
	int		len;

	count = 0;
	ref = 0;
	tmp = stack_a;
	len = ft_lstsize(stack_a);
	while (count < len)
	{
		if (tmp->index == -1)
		{
			ref = tmp->content;
			break ;
		}
		tmp = tmp->next;
		count++;
	}
	return (ref);
}
