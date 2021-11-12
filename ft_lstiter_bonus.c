/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:07:26 by mattig            #+#    #+#             */
/*   Updated: 2021/11/05 17:05:06 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Itere sur List et appique la fonction au contenu de chaque elements
** Params : Adresse pointeur vers elements
** Return : Void
**/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr_lst;
	t_list	*ptr_temp;

	ptr_lst = lst;
	while (ptr_lst != NULL)
	{
		ptr_temp = ptr_lst->next;
		f(ptr_lst->content);
		ptr_lst = ptr_temp;
	}
}
