/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:11:12 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/10 10:14:05 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
		str[i++] = (unsigned char)c;
	return (s);
}

/*
#include <string.h>
#include <stdio.h>

int	main()
{
	
	char	str[50] = "Ceci est un test";
	int		i;
	int		j;
	size_t	nb;

	i = '.';
	j = 0;
	nb = 5 * sizeof(char);
	printf("Avant: %s\n", str);
	ft_memset(str, i, nb);
	printf("Apres: %s\n", str);
	return (0);
}*/
