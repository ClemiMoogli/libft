/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:55:42 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/06 09:41:11 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	ft_is_sep(char c, char const *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_startingindex(char const *s1, char const *set)
{
	int	index;

	index = 0;
	while (s1[index] && ft_is_sep(s1[index], set))
		index++;
	return (index);
}

static int	ft_endingindex(char const *s1, char const *set)
{
	int	index;

	index = (int)ft_strlen(s1);
	while (index > 0 && ft_is_sep(s1[index - 1], set))
		index--;
	return (index);
}

char	*ft_strtrim(char const*s1, char const *set)
{
	int		index_debut;
	int		index_fin;
	int		len_ptr;
	char	*ptr;

	if (!set || !s1)
		return (NULL);
	index_debut = ft_startingindex(s1, set);
	index_fin = ft_endingindex(s1, set);
	if (index_fin < index_debut)
		index_fin = index_debut;
	len_ptr = index_fin - index_debut;
	ptr = malloc((len_ptr + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1 + index_debut, len_ptr);
	ptr[len_ptr] = '\0';
	return (ptr);
}
/*
int main()
{
    char *s1 = "aaabbbccc";
    char *set = "abc";
	printf("Index debut: %d\n", ft_startingindex(s1, set));
	printf("Index fin: %d\n", ft_endingindex(s1, set));
	printf("PERSO: %s\n", ft_strtrim(s1, set));
	return (0);
}*/