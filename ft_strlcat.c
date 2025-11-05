/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clement <clement@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:36:12 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/05 22:53:16 by clement          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	len_dst_initial;
	size_t	j;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	len_dst_initial = len_dst;
	j = 0;
	if (size == 0 || size <= len_dst)
		return (size + len_src);
	else if (len_dst < size && size <= (len_dst + len_src))
	{
		while ((size - len_dst - 1)>0 && src[j])
		{
			dst[len_dst] = src[j];
			len_dst++;
			j++;
		}
		dst[len_dst] = '\0';
	}
	else if (size > (len_dst + len_src))
	{
		while (src[j])
		{
			dst[len_dst] = src[j];
			j++;
			len_dst++;
		}
		dst[len_dst] = '\0';
	}
	return (len_dst_initial + len_src);
}

/*
int	main(){
	char	dest[50] = "Hello";
	char	dest2[50] = "Hello";
	char	source[50] = " World!";
	char	source2[50] = " World!";
	int		resultPerso;
	int		resultVrai;
	int		size;

	size = 7;
	resultPerso = ft_strlcat(dest, source, size);
	resultVrai = strlcat(dest2, source2, size);
	printf("RESULT PERSO : %d\n", resultPerso);
	printf("RESULT VRAI : %d\n", resultVrai);
	printf("Perso: %s\n",dest);
	printf("Vrai: %s\n", dest2);
	return (0);
}


// concatener src a la fin de dest sans jamais depasser la taille total size du buffer dest.
// on copie le plus possible de src dans dest sans depasser size et on retourne la longueur qu'on aurait eu si on avait assez de place
//cas1: pas de place du tout (size=0)
//cas2: size <= len_dest, pas assez de place pour faire quelque chose. on retourn le taille qu'on aurait eu.
//cas3: len_dst < size <= len_dst + len_src, copier jusqu'a size-1 + '\0' et return len total
//cas4: size > len_dst + len_src 

*/