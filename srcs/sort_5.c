/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operculesanguinaire <marvin@42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:28:34 by operculesangu     #+#    #+#             */
/*   Updated: 2021/11/08 15:28:36 by operculesangu    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	sort_5(t_list **stack_a, t_list **stack_b)
{
	if (check_all_good(stack_a) == 1)
		exit(0);
	else
		sort_5_deep_1(stack_a, stack_b);
	return ;
}

void	sort_5_deep_1(t_list **stack_a, t_list **stack_b)
{
	unsigned int	max_pos;
	unsigned int	min_pos;

	min_pos = min_max(stack_a, min);
	max_pos = min_max(stack_a, max);
	if (max_pos == 1)
		rotate_a(stack_a);
	if (check_all_good(stack_a) == 1)
		exit(0);
	push_b(stack_a, stack_b);
	if (max_pos == 2)
		rotate_a(stack_a);
	push_b(stack_a, stack_b);
	sort_3(stack_a);
	if (*stack_b && (*stack_b)->next
		&& (*stack_b)->content < (*stack_b)->next->content)
		rotate_b(stack_b);
	push_a_management(stack_a, stack_b, min_pos);
	return ;
}

void	push_a_management(t_list **stack_a, t_list **stack_b, int min_pos)
{
	int	min_pos_a;

	if (*stack_b && (*stack_b)->tag != min_pos
		&& (*stack_b)->content < (*stack_a)->content)
		push_a(stack_a, stack_b);
	min_pos_a = min_max(stack_a, min);
	if (*stack_b && (*stack_b)->tag == min_pos
		&& (*stack_b)->content < (*stack_a)->content)
	{	
		while ((*stack_a)->tag != min_pos_a)
			rotate_a(stack_a);
		push_a(stack_a, stack_b);
	}
	if (*stack_b && (*stack_b)->content > (*stack_a)->content
		&& (*stack_b)->content < (*stack_a)->next->content)
	{
		push_a(stack_a, stack_b);
		swap_a(stack_a);
	}
	else if (*stack_b && (*stack_b)->content > (*stack_a)->content)
		reverse_rotate_a(stack_a);
	if (*stack_b)
		push_a_management(stack_a, stack_b, min_pos);
	end_sorting_5(stack_a);
	return ;
}
