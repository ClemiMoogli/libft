/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clement <clement@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:57:37 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/03 22:54:00 by clement          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
		str[i++] = 0;
}

/*
#include <strings.h>
int	main()
{
	char	test[50] = "123";
	char	test2[50] = "123";
	ft_bzero(test, 2);
	bzero(test2, 2);
	printf("PERSO: %s\n", test);
	printf("VRAI:%s\n", test2);
	return (0);
}*/
