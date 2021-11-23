/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_and_group.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <jbuan@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:34:26 by jbuan             #+#    #+#             */
/*   Updated: 2021/11/09 10:59:32 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	group_index(t_list **stack, t_group group)
{
	int		pos;
	t_list	*ptr;

	pos = 1;
	ptr = *stack;
	while (ptr)
	{
		if (signal_group(ptr->content, group))
			return (pos);
		ptr = ptr->next;
		pos++;
	}
	return (pos);
}

void	roll(t_list **stack_a, int i, void (*top)(), void (*bot)())
{
	int		count;
	void	(*f)();

	count = count_lst(*stack_a);
	if (i > (count / 2))
	{
		i = (count - i + 1);
		f = bot;
	}
	else
	{
		i--;
		f = top;
	}
	while (i--)
		(*f)(stack_a);
}

int	group_end(t_list *stack, t_group group)
{
	while (stack)
	{
		if (signal_group(stack->content, group))
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	signal_group(int content, t_group group)
{
	if (content >= group.min && content <= group.max)
		return (1);
	return (0);
}
