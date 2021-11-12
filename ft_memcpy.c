/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 11:57:36 by mattig            #+#    #+#             */
/*   Updated: 2021/11/04 18:52:22 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*ptr_src;
	char	*ptr_dest;

	ptr_src = (char *)src;
	ptr_dest = (char *)dest;
	if (dest == NULL && src == NULL)
	{
		return (NULL);
	}
	if (n == 0)
		return ((void *)dest);
	i = 0;
	while (n--)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return ((void *)dest);
}
