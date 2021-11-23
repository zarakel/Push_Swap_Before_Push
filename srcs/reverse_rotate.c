/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:06:45 by jbuan             #+#    #+#             */
/*   Updated: 2021/11/08 15:06:06 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	reverse_rotate_a(t_list **stack_a)
{
	t_list	*ptr;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	ptr = *stack_a;
	while (ptr->next->next)
		ptr = ptr->next;
	ptr->next->next = *stack_a;
	*stack_a = ptr->next;
	ptr->next = NULL;
	ft_putstr("rra\n");
}

void	reverse_rotate_b(t_list **stack_b)
{
	t_list	*ptr;

	ptr = *stack_b;
	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	while (ptr->next->next)
		ptr = ptr->next;
	ptr->next->next = *stack_b;
	*stack_b = ptr->next;
	ptr->next = NULL;
	ft_putstr("rrb\n");
}

void	reverse_rotate_rotate(t_list **stack_a, t_list **stack_b)
{
	t_list	*ptr;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	ptr = *stack_a;
	while (ptr->next->next)
		ptr = ptr->next;
	ptr->next->next = *stack_a;
	*stack_a = ptr->next;
	ptr->next = NULL;
	reverse_rotate_rotate_end(stack_b);
	ft_putstr("rrr\n");
}

void	reverse_rotate_rotate_end(t_list **stack_b)
{
	t_list	*ptr;

	ptr = *stack_b;
	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	while (ptr->next->next)
		ptr = ptr->next;
	ptr->next->next = *stack_b;
	*stack_b = ptr->next;
	ptr->next = NULL;
}
