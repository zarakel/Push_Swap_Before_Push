/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operculesanguinaire <marvin@42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:31:35 by operculesangu     #+#    #+#             */
/*   Updated: 2021/11/08 14:31:36 by operculesangu    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*last;

	last = *lst;
	while (last)
	{
		last = (*lst)->next;
		free (*lst);
		(*lst) = last;
	}
	return ;
}
