/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrrotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:06:26 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/17 19:13:46 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst_lib.h"

void	ft_lstrrotate(t_list	**rrotate)
{
	t_list	*last;
	t_list	*last_del;

	last = ft_lstnew_int(ft_lstlast(*rrotate)->content, \
				ft_lstlast(*rrotate)->index);
	last_del = *rrotate;
	ft_lstlast(*rrotate)->next = NULL;
	while (last_del->next->next)
		last_del = last_del->next;
	ft_lstdelone_int(last_del->next, ft_del);
	last_del->next = NULL;
	ft_lstadd_front(rrotate, last);
}
