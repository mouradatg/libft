/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 18:16:03 by mattig            #+#    #+#             */
/*   Updated: 2021/11/04 18:52:41 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	while (n && *ptr_s1 && *ptr_s1 == *ptr_s2)
	{
		ptr_s1++;
		ptr_s2++;
		n--;
	}
	if (n)
	{
		return (*ptr_s1 - *ptr_s2);
	}
	else
		return (0);
}
