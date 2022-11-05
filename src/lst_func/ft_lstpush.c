/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:33:32 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/17 18:36:24 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst_lib.h"

void	ft_lstpush(t_list	**push1, t_list	**push2)
{
	t_list	*front;

	front = ft_lstnew_int((*push2)->content, (*push2)->index);
	ft_lstdel_next(push2);
	ft_lstadd_front(push1, front);
}
