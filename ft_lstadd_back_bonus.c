/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:48:59 by mattig            #+#    #+#             */
/*   Updated: 2021/11/05 19:08:35 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Ajoute un element a la fin de la liste
** Params : Adresse Ptr 1er Element + Adresse Ptr nwe Elements
** Return : Void
*/
void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*ptr_list;

	if (alst)
	{
		if (*alst == NULL)
			*alst = new;
		else
		{
			ptr_list = ft_lstlast(*(alst));
			ptr_list->next = new;
		}
	}
}
