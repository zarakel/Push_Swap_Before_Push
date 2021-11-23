/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utilities_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operculesanguinaire <marvin@42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:37:40 by operculesangu     #+#    #+#             */
/*   Updated: 2021/11/08 15:54:19 by operculesangu    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	last_pos(t_list **stack_a)
{
	t_list	*ptr1;

	ptr1 = *stack_a;
	while (ptr1->next)
		ptr1 = ptr1->next;
	return (ptr1->content);
}

int	last_pos_tag(t_list **stack_a)
{
	t_list	*ptr1;

	ptr1 = *stack_a;
	while (ptr1->next)
		ptr1 = ptr1->next;
	return (ptr1->tag);
}

void	end_sorting(t_list **stack_a)
{
	int	min_pos_a;

	min_pos_a = min_max(stack_a, min);
	while ((*stack_a)->tag != min_pos_a
		&& check_all_good(stack_a) == 0)
		reverse_rotate_a(stack_a);
	return ;
}

void	end_sorting_5(t_list **stack_a)
{
	int	min_pos_a;

	min_pos_a = min_max(stack_a, min);
	while ((*stack_a)->tag != min_pos_a
		&& check_all_good(stack_a) == 0)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			swap_a(stack_a);
		reverse_rotate_a(stack_a);
	}
	return ;
}
