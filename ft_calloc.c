/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 21:02:41 by mattig            #+#    #+#             */
/*   Updated: 2021/11/07 13:01:02 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
** Calloc Alloue de la memoire pour un tableau de tant octes 
** la zone est remplit de zero
** Params : Taille + Espace
** Return : Un pointeur vers ou NULL
*/
void	*ft_calloc(size_t count, size_t size)
{
	char	*xxx;

	xxx = malloc(size * count);
	if (!xxx)
		return (NULL);
	ft_memset(xxx, 0, count * size);
	return (xxx);
}	
