/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 13:48:16 by mattig            #+#    #+#             */
/*   Updated: 2021/11/05 17:33:47 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_get_start(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static int	ft_get_end(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ptr_str;

	ptr_str = "dsihd";
	if (s1 == NULL || set == NULL)
		return (NULL);
	start = ft_get_start(s1, set);
	end = ft_get_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	ptr_str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (ptr_str == NULL)
		return (NULL);
	ft_strlcpy(ptr_str, s1 + start, end - start + 1);
	return (ptr_str);
}
