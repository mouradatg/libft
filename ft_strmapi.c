/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 10:42:44 by mattig            #+#    #+#             */
/*   Updated: 2021/11/04 23:05:00 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr_s;
	int		i;
	int		len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s) + 1;
	ptr_s = (char *)malloc(sizeof(char) * len);
	if (ptr_s == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr_s[i] = f(i, s[i]);
		i++;
	}
	ptr_s[i] = '\0';
	return (ptr_s);
}
