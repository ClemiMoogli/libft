/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:05:38 by cjeannin          #+#    #+#             */
/*   Updated: 2025/10/30 10:33:54 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const	void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;
	i = 0;
	while (i < n)
	{
		c1 = ((unsigned char *)s1)[i];
		c2 = ((unsigned char *)s2)[i];
		if (((int)c1 - (int)c2) != 0)
			return ((int)c1 - (int)c2) ;
		i++;
	}
	return (0);
}

int	main()
{
	char	s1[50] = "ABCAA";
	char	s2[50] = "ABbAA";
	size_t	n = 5;
	printf("PERSO: %d\n", ft_memcmp(s1, s2, n));
	printf("VRAI: %d\n", memcmp(s1, s2, n));
	return (0);
}
