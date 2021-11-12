/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:17:05 by mattig            #+#    #+#             */
/*   Updated: 2021/11/04 18:48:29 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_strcat(char *dst, const char *src)
{
	char	*d;

	d = dst;
	while (*d)
		d++;
	while (*src)
		*d++ = *src++;
	*d = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;		
	int		len_s2;		
	char	*ptr_s;

	if (!s1 || !s2)
		return (NULL);
	len_s2 = ft_strlen(s2);
	len_s1 = ft_strlen(s1);
	ptr_s = (char *)malloc(sizeof(char) * (len_s1 + len_s2) + 1);
	if (ptr_s == NULL)
		return (NULL);
	ft_strlcpy(ptr_s, s1, (ft_strlen(s1) + 1));
	ft_strcat(ptr_s, s2);
	return (ptr_s);
}
