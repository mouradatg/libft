/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:32:46 by mattig            #+#    #+#             */
/*   Updated: 2021/11/08 12:05:37 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Cette fonction creer un tableau avec une chaine a un index precis 
** Params : String a extraire / Index debut / Index fin 
** Return : Pointeur sur Nwe Tab  
*/
static char	*array_push(char const *s, int start, int end)
{
	char	*tab;
	int		i;

	i = 0;
	tab = ft_calloc(end - start + 1, sizeof(char));
	while (start < end)
		tab[i++] = s[start++];
	tab[i] = '\0';
	return (tab);
}

/*
** Cette Fonction permet de compter le nombre de mots dans une chaine 
** grace a une cles
** Params : Chaine a compter / Un caractere Cle
** Return : Retourne le nombre de mots
*/
static int	ft_count_word(char const *s, char c)
{
	int	count;
	int	key;

	count = 0;
	key = 0;
	while (*s)
	{
		if (*s != c && key == 0)
		{
			key = 1;
			count++;
		}
		else if (*s == c)
			key = 0;
		s++;
	}
	return (count);
}

/*
** Alloue et retourne un tableau de chaine de caracteres result decoup
** Params : Chaine caracteres a decouper / Caractere delimteur
** Return : Tableau de nouvelle chaine ou NULL
*/
char	**ft_split(char const *s, char c)
{
	int			cursor;
	int			j;
	size_t		i;
	char		**ptr_tab;

	if (!s)
		return (NULL);
	ptr_tab = ft_calloc(ft_count_word(s, c) + 1, sizeof(char *));
	if (ptr_tab == NULL)
		return (NULL);
	i = -1;
	j = 0;
	cursor = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && cursor < 0)
			cursor = i;
		else if ((s[i] == c || i == ft_strlen(s)) && cursor >= 0)
		{
			ptr_tab[j++] = array_push(s, cursor, i);
			cursor = -1;
		}
	}
	ptr_tab[j] = 0;
	return (ptr_tab);
}
