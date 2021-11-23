/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <jbuan@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:02:05 by jbuan             #+#    #+#             */
/*   Updated: 2021/11/08 15:02:07 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	if (count_lst(*stack_a) <= 5)
		parse_until_5(stack_a, stack_b);
	else
		parse_after_5(stack_a, stack_b);
	return ;
}
