/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <jbuan@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:23:28 by jbuan             #+#    #+#             */
/*   Updated: 2021/11/08 15:23:30 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	sort_4(t_list **stack_a, t_list **stack_b)
{
	int	max_pos;

	max_pos = min_max(stack_a, max);
	if ((*stack_a)->tag == max_pos)
		rotate_a(stack_a);
	push_b(stack_a, stack_b);
	sort_3(stack_a);
	while (*stack_b)
	{
		if ((*stack_b)->content > (*stack_a)->content)
			rotate_a(stack_a);
		else if ((*stack_b)->content < (*stack_a)->content)
			push_a(stack_a, stack_b);
	}
	end_sorting(stack_a);
}
