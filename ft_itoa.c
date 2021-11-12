/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:36:53 by mattig            #+#    #+#             */
/*   Updated: 2021/11/05 20:12:37 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_lenght(long nb)
{
	int	lenght;

	lenght = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = nb * -1;
		lenght++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		lenght++;
	}
	return (lenght);
}

char	*ft_itoa(int n)
{
	char	*ptr_str;
	int		len;
	int		sign;
	long	nb;

	sign = 1;
	nb = (long)n;
	len = count_lenght(nb);
	ptr_str = (char *)malloc(sizeof(char) * len + 1);
	if (ptr_str == NULL)
		return (NULL);
	ptr_str[len] = '\0';
	if (nb < 0)
		sign *= -1;
	while (len--)
	{
		ptr_str[len] = sign * nb % 10 + 48;
		nb /= 10;
	}
	if (sign < 0)
		ptr_str[0] = '-';
	return (ptr_str);
}
