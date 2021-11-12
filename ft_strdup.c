/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 11:39:04 by mattig            #+#    #+#             */
/*   Updated: 2021/11/04 18:50:56 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*ptr_s1;

	len = ft_strlen(s1);
	ptr_s1 = (char *)malloc(sizeof(const char) * (len + 1));
	if (ptr_s1 == NULL)
		return (NULL);
	ptr_s1[len] = '\0';
	i = 0;
	while (i < len)
	{
		ptr_s1[i] = s1[i];
		i++;
	}
	return (ptr_s1);
}
