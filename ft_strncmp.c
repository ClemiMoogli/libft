/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:41:40 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/04 13:19:56 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char	*str1;
	unsigned char	*str2;
	
	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int main() {
    char s1[] = {-1, 0}; // 255 en unsigned
    char s2[] = {1, 0};

	printf("PERSO: %d\n", ft_strncmp(s1, s2, 1));
	printf("VRAI: %d\n", strncmp(s1, s2, 1));
    // Doit traiter les caractères comme unsigned
    return 0;
}*/

/*
int main()
{
	char    s1[50] = "cBCA";
	char    s2[50] = "ABCD";
	size_t  size = 5;
	printf("PERSO: %d\n", ft_strncmp(s1, s2, size));
	printf("PERSO: %d\n", strncmp(s1, s2, size));
	return (0);
}*/
