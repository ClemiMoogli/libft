/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:40:21 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/10 10:13:26 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*result;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			result = &((char *)s)[i];
			return (result);
		}
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char	data[20] = {  1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	size_t	n = 11;
	int	c = 12;
	char	*resultP;
	char	*resultV;

	resultP = ft_memchr(data, c, n);
	resultV = memchr(data, c, n);
	printf("PERSO: %s\n", resultP);
	printf("PERSO: %s\n", resultV);
	return (0);
}*/
