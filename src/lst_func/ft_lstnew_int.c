/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:46:14 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/20 20:06:55 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew_int(int content, int index)
{
	t_list	*obj;

	obj = malloc(sizeof(t_list));
	if (obj == NULL)
		return (0);
	obj->content = content;
	obj->index = index;
	obj->next = NULL;
	return (obj);
}
