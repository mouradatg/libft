/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:52:54 by mattig            #+#    #+#             */
/*   Updated: 2021/11/04 18:55:12 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	need_len;

	if (*needle == '\0')
		return ((char *)haystack);
	need_len = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= need_len)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, need_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
