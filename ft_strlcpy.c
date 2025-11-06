/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:33:04 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/04 11:29:12 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (src[j])
		j++;
	i = 0;
	if (size == 0)
		return (j);
	while (i < (size - 1) && src[i])
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
	char	dest2[50] = "Ici";
	char	src[50] = "Copier ceci";
	size_t result2;
	size_t	result;

	result = ft_strlcpy(dest, src, 0);
	result2 = strlcpy(dest2, src, 0);
	printf("PERSO :%s\n", dest);
	printf("PERSO :%zu\n", result);
	printf("VRAI: %s\n", dest2);
	printf("VRAI :%zu\n", result2);
	return (0);
}*/
