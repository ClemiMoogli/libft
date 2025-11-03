/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clement <clement@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:33:04 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/03 22:59:36 by clement          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// PAS OUF OUF SI SIZE = 0
#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (src[j])
		j++;
	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
/*
int	main()
{
	char	dest[50] = "Ici";
	char	src[50] = "Copier ceci";
	size_t	result;
	result = ft_strlcpy(dest, src, 5);
	printf("%s\n", dest);
	printf("%zu\n", result);
	return (0);
}*/
