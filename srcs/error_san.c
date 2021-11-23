/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_san.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <jbuan@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:28:37 by jbuan             #+#    #+#             */
/*   Updated: 2021/11/08 14:28:39 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	error_san_atoi(void)
{
	write(2, "Error\n", 7);
	exit(0);
	return ;
}

void	error_san(t_list **stack_a, char **cpy_argv)
{
	ft_lstclear(stack_a);
	free_split(cpy_argv);
	write(2, "Error\n", 7);
	exit(0);
	return ;
}
