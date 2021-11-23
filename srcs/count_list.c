/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <jbuan@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:21:17 by jbuan             #+#    #+#             */
/*   Updated: 2021/11/08 14:27:04 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	count_lst(t_list *s)
{
	t_list	*ptr;
	int		i;

	i = 0;
	ptr = s;
	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}

int	middle_stack(t_list **stack_a, int whole_stack)
{
	t_list	*ptr;
	int		i;

	i = 1;
	ptr = *stack_a;
	while (i <= (whole_stack / 2))
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr->content);
}

int	middle_stack_signal(t_list **stack, int middle)
{
	if ((*stack)->content > middle)
		return (1);
	else
		return (0);
}
