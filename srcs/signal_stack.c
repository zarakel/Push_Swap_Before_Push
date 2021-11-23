/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <jbuan@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:15:38 by jbuan             #+#    #+#             */
/*   Updated: 2021/11/08 15:15:40 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	stack_a_management(t_list **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content)
		return (1);
	else
		return (0);
}

int	stack_b_management(t_list **stack_b)
{
	if ((*stack_b && (*stack_b)->next)
		&& ((*stack_b)->content < (*stack_b)->next->content))
		return (1);
	else
		return (0);
}

int	stack_a_and_b_management(t_list **stack_a, t_list **stack_b)
{
	if (((*stack_a)->content > (*stack_a)->next->content)
		&& ((*stack_b && (*stack_b)->next)
			&& ((*stack_b)->content < (*stack_b)->next->content)))
		return (1);
	else
		return (0);
}
