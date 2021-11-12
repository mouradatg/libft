/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:18:49 by mattig            #+#    #+#             */
/*   Updated: 2021/11/05 17:06:44 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Sup et libere la memoire de la lst + les enfants 
** le ptr final doit etre mis a NULL
** Params : Adresse Ptr / Adresse de la function 
** Return Void 
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr_temp;

	if (lst)
	{
		while (*lst)
		{
			ptr_temp = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = ptr_temp;
		}
	}
}
