/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <jbuan@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:57:27 by jbuan             #+#    #+#             */
/*   Updated: 2021/11/09 13:58:44 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	parse_until_5(t_list **stack_a, t_list **stack_b)
{
	if (!(*stack_a) || (*stack_a && (!((*stack_a)->next))))
		exit(0);
	else if (count_lst(*stack_a) == 2 && check_all_good(stack_a) == 0)
		sort_2(stack_a);
	else if (count_lst(*stack_a) == 3 && check_all_good(stack_a) == 0)
		sort_3(stack_a);
	else if (count_lst(*stack_a) == 4 && check_all_good(stack_a) == 0)
		sort_4(stack_a, stack_b);
	else if (count_lst(*stack_a) == 5 && check_all_good(stack_a) == 0)
		sort_5(stack_a, stack_b);
	else
		exit(0);
}

void	parse_after_5(t_list **stack_a, t_list **stack_b)
{
	t_group	group;

	if (count_lst(*stack_a) <= 500)
	{
		if (check_all_good(stack_a) == 1)
			exit(0);
		group.increment = 50;
	}
	else
	{
		if (check_all_good(stack_a) == 1)
			exit(0);
		group.increment = 100;
	}
	sort_big(stack_a, stack_b, &group);
}
