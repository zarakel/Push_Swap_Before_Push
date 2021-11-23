/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <jbuan@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:21:53 by jbuan             #+#    #+#             */
/*   Updated: 2021/11/08 15:21:56 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	sort_3(t_list **stack)
{
	if (*stack && (*stack)->next && (*stack)->next->next)
		sort_3_part_1(stack);
	return ;
}

void	sort_3_part_1(t_list **stack)
{
	if ((*stack)->content > (*stack)->next->content
		&& (*stack)->next->content < (*stack)->next->next->content
		&& (*stack)->next->next->content > (*stack)->content)
	{
		swap_a(stack);
		return ;
	}
	if ((*stack)->content < (*stack)->next->content
		&& (*stack)->next->content > (*stack)->next->next->content
		&& (*stack)->next->next->content < (*stack)->content)
	{
		reverse_rotate_a(stack);
		return ;
	}
	sort_3_part_2(stack);
	return ;
}

void	sort_3_part_2(t_list **stack)
{
	if ((*stack)->content > (*stack)->next->content
		&& (*stack)->next->content > (*stack)->next->next->content
		&& (*stack)->next->next->content < (*stack)->content)
	{
		swap_a(stack);
		reverse_rotate_a(stack);
		return ;
	}
	if ((*stack)->content > (*stack)->next->content
		&& (*stack)->next->content < (*stack)->next->next->content
		&& (*stack)->next->next->content < (*stack)->content)
	{
		rotate_a(stack);
		return ;
	}
	if ((*stack)->content < (*stack)->next->content
		&& (*stack)->next->content > (*stack)->next->next->content
		&& (*stack)->next->next->content > (*stack)->content)
	{
		reverse_rotate_a(stack);
		swap_a(stack);
		return ;
	}
	return ;
}
