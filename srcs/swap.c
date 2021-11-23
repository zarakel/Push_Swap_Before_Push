/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operculesanguinaire <marvin@42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:32:32 by operculesangu     #+#    #+#             */
/*   Updated: 2021/11/08 15:32:33 by operculesangu    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	swap_a(t_list **stack_a)
{
	t_list	*ptr1;
	t_list	*ptr2;
	t_list	*ptr3;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	ptr1 = *stack_a;
	ptr2 = *stack_a;
	ptr3 = *stack_a;
	ptr1 = ptr1->next->next;
	ptr3 = ptr3->next;
	ptr3->next = ptr2;
	ptr2->next = ptr1;
	*stack_a = ptr3;
	ft_putstr("sa\n");
	return ;
}

void	swap_b(t_list **stack_b)
{
	t_list	*ptr1;
	t_list	*ptr2;
	t_list	*ptr3;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	ptr1 = *stack_b;
	ptr2 = *stack_b;
	ptr3 = *stack_b;
	ptr1 = ptr1->next->next;
	ptr3 = ptr3->next;
	ptr3->next = ptr2;
	ptr2->next = ptr1;
	*stack_b = ptr3;
	ft_putstr("sb\n");
	return ;
}

void	swap_swap(t_list **stack_a, t_list **stack_b)
{
	t_list	*ptr1;
	t_list	*ptr2;
	t_list	*ptr3;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	ptr1 = *stack_a;
	ptr2 = *stack_a;
	ptr3 = *stack_a;
	ptr1 = ptr1->next->next;
	ptr3 = ptr3->next;
	ptr3->next = ptr2;
	ptr2->next = ptr1;
	*stack_a = ptr3;
	swap_swap_end(stack_b);
	ft_putstr("ss\n");
	return ;
}

void	swap_swap_end(t_list **stack_b)
{
	t_list	*ptr1;
	t_list	*ptr2;
	t_list	*ptr3;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	ptr1 = *stack_b;
	ptr2 = *stack_b;
	ptr3 = *stack_b;
	ptr1 = ptr1->next->next;
	ptr3 = ptr3->next;
	ptr3->next = ptr2;
	ptr2->next = ptr1;
	*stack_b = ptr3;
}
