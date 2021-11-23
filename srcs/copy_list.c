/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <jbuan@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:18:36 by jbuan             #+#    #+#             */
/*   Updated: 2021/11/08 14:20:20 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*copy_list_a(t_list *stack_a)
{
	t_list	*ptr1;
	t_list	*ptr2;
	t_list	*ptr3;
	int		i;

	i = 1;
	ptr2 = stack_a;
	while (ptr2->next)
	{
		ptr2 = ptr2->next;
		i++;
	}
	ptr3 = stack_a;
	while (i < 0)
	{
		ptr1 = ft_lstnew(ptr3->content, i);
		ptr3 = ptr3->next;
		ft_lstadd_front(&stack_a, ptr1);
		i--;
	}
	return (stack_a);
}
