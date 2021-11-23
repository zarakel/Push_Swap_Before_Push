/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <jbuan@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:55:15 by jbuan             #+#    #+#             */
/*   Updated: 2021/11/11 14:58:44 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**cpy_argv;
	int		i;

	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	cpy_argv = NULL;
	if (argc > 1)
	{
		while (argv[i])
		{
			cpy_argv = ft_split(argv[i], ' ');
			if (!(*cpy_argv) || !check_bit(&stack_a, cpy_argv, i))
				error_san(&stack_a, cpy_argv);
			free_split(cpy_argv);
			i++;
		}
		push_swap(&stack_a, &stack_b);
		ft_lstclear(&stack_a);
		return (1);
	}
	return (0);
}
