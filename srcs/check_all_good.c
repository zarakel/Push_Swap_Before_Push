/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all_good.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <jbuan@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:18:18 by jbuan             #+#    #+#             */
/*   Updated: 2021/11/08 14:18:22 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	check_all_good(t_list **stack_a)
{
	t_list	*ptr;

	ptr = *stack_a;
	while (ptr->next)
	{
		if (ptr->content > ptr->next->content)
			return (0);
		ptr = ptr->next;
	}
	return (1);
}

int	check_all_good_b(t_list **stack_b)
{
	t_list	*ptr;

	ptr = *stack_b;
	while (ptr->next)
	{
		if (ptr->content < ptr->next->content)
			return (0);
		ptr = ptr->next;
	}
	return (1);
}
