/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 10:45:29 by mattig            #+#    #+#             */
/*   Updated: 2021/11/04 18:52:15 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr_s;

	ptr_s = s;
	while (n--)
	{
		*ptr_s = c;
		ptr_s++;
	}
	return ((void *)s);
}
