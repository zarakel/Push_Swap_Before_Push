/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <jbuan@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:30:17 by jbuan             #+#    #+#             */
/*   Updated: 2021/11/23 10:07:43 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					j;
	unsigned long int	k;

	i = 0;
	j = 1;
	k = 0;
	if ((str[i] < '0' && str[i] > '9') || (str[i] == '-'
			&& str[i + 1] == '0'))
		error_san_atoi();
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j = j * -1;
		else if (str[i] == '+')
			error_san_atoi();
		i++;
	}
	if (str[i] == '+' || str[i] == '-' || (str[i] < '0' || str[i] > '9'))
		error_san_atoi();
	while (str[i] >= '0' && str[i] <= '9')
		k = k * 10 + str[i++] - '0';
	if ((k > 2147483647 && j == 1) || (k > 2147483648 && j == -1))
		error_san_atoi();
	return (j * k);
}
