/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <jbuan@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:16:58 by jbuan             #+#    #+#             */
/*   Updated: 2021/11/08 15:16:59 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	sort_2(t_list **stack)
{
	if ((*stack) && (*stack)->next
		&& (*stack)->content > (*stack)->next->content)
	{
		rotate_a(stack);
		return ;
	}
	return ;
}
