/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:35:32 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/03 10:42:43 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_little;
	char	*result;

	i = 0;
	j = 0;
	len_little = 0;
	while(little[len_little])
		len_little++;
	if (len_little == 0)
		return ((char *)big);
	while (i < len)
	{
		if (big[i] == little[j])
		{
			result = &((char *)big)[i];
			while (big[i] == little[j])
			{
				i++;
				j++;
			}
			if (j == len_little)
				return (result);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
/*
int	main()
{
	char	big[50] = "Foo Bar Baz";
	char	little[50] = "Bar";
	size_t	n = 9;
	printf("PERSO: %s \n", ft_strnstr(big, little, n));
	printf("VRAI:  %s \n", strnstr(big, little, n));
	return (0);
}*/
