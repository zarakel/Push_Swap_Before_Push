/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 10:54:59 by jbuan             #+#    #+#             */
/*   Updated: 2021/10/19 11:39:20 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../includes/libft.h"

t_list	*ft_lstnew(int content, int tag)
{
	t_list	*ptr;

	ptr = malloc(sizeof(t_list));
	if (ptr)
	{
		ptr->next = NULL;
		ptr->content = content;
		ptr->tag = tag;
	}
	return (ptr);
}
