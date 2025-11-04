/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clement <clement@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:15:37 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/04 23:16:10 by clement          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	is_word(const char *s, char sep, int index)
{
	if (index == 0 && s[index] != sep)
		return (1);
	if ((s[index - 1] == sep) && (s[index] != sep))
		return (1);
	return (0);
}

int	count_word(const char *s, char sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == sep)
			j++;
		i++;
	}
	return (j);
}

char	*insert_word(char *ptr, const char *s, char sep, int index)
{
	int	i;
	int	len_word;

	i = index;
	while (s[i] != sep && s[i])
		i++;
	len_word = i - index;
	ptr = malloc((len_word + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len_word)
	{
		ptr[i] = s[index];
		i++;
		index++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		nb_word;
	char	**ptr;
	int		i;
	int		index_ptr;

	i = 0;
	index_ptr = 0;
	if (!s)
		return (NULL);
	nb_word = count_word(s, c);
	ptr = malloc((nb_word + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		if (is_word(s, c, i))
		{
			ptr[index_ptr] = insert_word(ptr[index_ptr], s, c, i);
			index_ptr++;
		}
		i++;
	}
	ptr[index_ptr] = NULL;
	return (ptr);
}
/*
int main()
{
	char    *s = NULL;
	char    c = '|';
	char    **result;

	result = ft_split(s, c);
	printf("Count word : %s\n",result);
	printf("%s\n", result[0]);
	printf("%s\n", result[1]);
	printf("%s\n", result[2]);
	printf("%s\n", result[3]);
	printf("%s\n", result[4]);
	printf("%s\n", result[5]);
	printf("%s\n", result[5]);
	return (0);
}*/