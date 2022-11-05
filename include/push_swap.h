/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:48:48 by aminoru-          #+#    #+#             */
/*   Updated: 2022/10/20 18:37:51 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "lst_lib.h"
// lib of 42 projects
# include "../lib/libft/libft.h"
# include "../lib/libft/get_next_line.h"
# include "../lib/printf/ft_printf.h"

# define START_INDEX -1

// valid
void	valid_all(int argc, char *argv[]);
int		valid_is_int(int argc, char *argv[]);
int		valid_duplicate(int argc, char *argv[]);
int		valid_max_limit(int argc, char *argv[]);

// tools
long	long_atoi(const char *str);
t_list	*make_list(int argc, char *argv[]);

// error
void	perror_exit(char *msg);
void	perror_exit_standard(void);

// func
void	ft_sa(t_list **stack_a);
void	ft_sb(t_list **stack_b);
void	ft_ss(t_list **stack_a, t_list **stack_b);
void	ft_ra(t_list **stack_a);
void	ft_rb(t_list **stack_b);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_rra(t_list **stack_a);
void	ft_rrb(t_list **stack_b);
void	ft_rrr(t_list **stack_a, t_list **stack_b);
void	ft_pa(t_list **stack_a, t_list **stack_b);
void	ft_pb(t_list **stack_b, t_list **stack_a);

// func sort
int		ft_sort(t_list	*stack);
void	swap_sort(t_list **stack_a, t_list **stack_b);
void	rotate_sort(t_list **stack_a, t_list **stack_b);
void	rrotate_sort(t_list **stack_a, t_list **stack_b);
void	push_sort(t_list **stack_a, t_list **stack_b);
void	select_sort_type(t_list	**stack_a);
void	insertion_sort(t_list	**stack_a);
void	radix_sort(t_list	**stack_a);
void	r_fm(t_list	**stack_a, t_list	**stack_b, int digit, int range_pos);
void	r_sm(t_list	**stack_a, t_list	**stack_b, int digit, int range_pos);
void	radix_first(t_list	**stack_a, t_list	**stack_b, int digit);
void	radix_second(t_list	**stack_a, t_list	**stack_b, int digit);
t_list	*select_range(t_list	**stack_a, int digit, int direction);
t_list	*insert_range(t_list	**stack_a, t_list	*list, int digit, int num);
int		find_ref(t_list	*stack_a, int ref, int digit);
int		select_dir(t_list *stack_a, int ref_count, int ref, int digit);
int		find_dir(t_list *stack_a, int ref, int digit);
int		select_ref_count(t_list *stack_a, int ref, int digit);
void	tag_sort(t_list	**stack_a);
int		tag_ref(t_list *stack_a);
int		tag_min_ref(t_list *stack_a, int ref);
void	tag_set(t_list *stack_a, int ref, int index);

#endif