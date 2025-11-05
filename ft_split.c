/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:15:37 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/05 13:34:43 by cjeannin         ###   ########.fr       */
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

int count_word(const char *s, char sep)
{
	int	i;
	int	nb;
	char * str;


	i = 0;
	nb = 0;
	str = (char *)s;
	while (str[i])
	{
		if (i == 0 && (str[i] != sep))
			nb++;
		else if (i != 0 && (str[i - 1] == sep && str[i] != sep))
			nb++;
		i++;
	}
	return (nb);
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

void	ft_clean_ptr(char** ptr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(ptr[i])
	{
		while(ptr[i][j])
		{
			free(ptr[i]);
			j++;
		}
		i++;
		j = 0;
	}
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
			if (!ptr[index_ptr])
				ft_clean_ptr(ptr);
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
	char    s[] = "|||Ceci est un | test ||grandeur nature|||";
	char    c = ' ';
	char    **result;

	printf("count word: %d\n", count_word(s, c));
	result = ft_split(s, c);
	printf("%s\n", result[0]);
	printf("%s\n", result[1]);
	printf("%s\n", result[2]);
	printf("%s\n", result[3]);
	printf("%s\n", result[4]);
	printf("%s\n", result[5]);
	printf("%s\n", result[5]);
	return (0);
}*/