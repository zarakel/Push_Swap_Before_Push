/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operculesanguinaire <marvin@42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:30:25 by operculesangu     #+#    #+#             */
/*   Updated: 2021/11/08 15:30:26 by operculesangu    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	sort_big(t_list **stack_a, t_list **stack_b, t_group *group)
{
	int		count;
	int		index1;
	int		index2;
	t_group	next_group;

	count = count_lst(*stack_a);
	group->min = group_min(stack_a) - 1;
	group->max = (group->min + group->increment);
	while (count > 0)
	{
		next_group.min = group->min + group->increment;
		next_group.max = group->max + group->increment;
		index1 = group_index(stack_a, *group);
		index2 = group_index(stack_a, next_group);
		which_index(stack_a, stack_b, index1, index2);
		if (group_end(*stack_a, *group))
			group->max += group->increment;
		count = count_lst(*stack_a);
	}
	push_management(stack_a, stack_b);
}

void	which_index(t_list **stack_a, t_list **stack_b, int index1, int index2)
{
	if (index2 < index1)
	{
		roll(stack_a, index2, &rotate_a, &reverse_rotate_a);
		push_b(stack_a, stack_b);
		rotate_b(stack_b);
	}
	else
	{
		roll(stack_a, index1, &rotate_a, &reverse_rotate_a);
		push_b(stack_a, stack_b);
	}
}

void	push_management(t_list **stack_a, t_list **stack_b)
{
	int	maxpos;
	int	count;

	count = count_lst(*stack_b);
	maxpos = 0;
	while (count > 0)
	{
		maxpos = min_max_index(*stack_b, max);
		roll(stack_b, maxpos, &rotate_b, &reverse_rotate_b);
		push_a(stack_a, stack_b);
		count = count_lst(*stack_b);
	}
}
