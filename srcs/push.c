/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:52:57 by jbuan             #+#    #+#             */
/*   Updated: 2021/11/08 15:01:35 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*ptr_a;
	t_list	*ptr_b;

	ptr_a = *stack_b;
	ptr_b = *stack_b;
	ptr_a = ptr_a->next;
	*stack_b = ptr_a;
	ptr_b->next = NULL;
	if (*stack_a)
		ft_lstadd_front(stack_a, ptr_b);
	*stack_a = ptr_b;
	ft_putstr("pa\n");
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*ptr_a;
	t_list	*ptr_b;

	ptr_a = *stack_a;
	ptr_b = *stack_a;
	ptr_a = ptr_a->next;
	*stack_a = ptr_a;
	ptr_b->next = NULL;
	if (*stack_b)
		ft_lstadd_front(stack_b, ptr_b);
	*stack_b = ptr_b;
	ft_putstr("pb\n");
}
