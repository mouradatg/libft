/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:42:01 by mattig            #+#    #+#             */
/*   Updated: 2021/11/05 16:59:11 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Aloue et retourne une chaine de caracteres qui start et len
** Params : Chaine / Index debut / Taille max
** Return : New Chaine ou NULL 
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr_s;
	size_t	i;
	size_t	j;
	size_t	lenj;

	if (!s)
		return (NULL);
	lenj = ft_strlen(s);
	if (len > lenj)
		len = lenj;
	ptr_s = malloc(sizeof(char) * (len + 1));
	if (ptr_s == NULL)
		return (NULL);
	i = -1;
	j = 0;
	while (s[++i])
		if (i >= start && j < len)
			ptr_s[j++] = s[i];
	ptr_s[j] = '\0';
	return (ptr_s);
}
