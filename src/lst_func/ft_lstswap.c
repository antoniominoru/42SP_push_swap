/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:41:55 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/17 18:38:20 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst_lib.h"

void	ft_lstswap(t_list	**swap)
{
	t_list	*current;
	t_list	*next;

	current = ft_lstnew_int((*swap)->content, (*swap)->index);
	ft_lstdel_next(swap);
	next = ft_lstnew_int((*swap)->content, (*swap)->index);
	ft_lstdel_next(swap);
	ft_lstadd_front(swap, current);
	ft_lstadd_front(swap, next);
}
