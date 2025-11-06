/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:36:12 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/06 11:41:13 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst_int;
	size_t	len_dst;
	size_t	j;

	len_dst_int = ft_strlen(dst);
	len_dst = len_dst_int;
	j = 0;
	if (size == 0 || size <= len_dst)
		return (size + ft_strlen(src));
	else if (len_dst_int < size)
	{
		while (src[j] && (len_dst + j) <= size)
		{
			dst[len_dst] = src[j];
			len_dst++;
			j++;
		}
		dst[len_dst] = '\0';
	}
	return (len_dst_int + ft_strlen(src));
}
/*
int	main(){
	char	dest[50] = "Hello ";
	char	dest2[50] = "Hello ";
	char	source[50] = "World!";
	char	source2[50] = "World!";
	int		resultPerso;
	int		resultVrai;
	int		size;

	size = 10;
	resultPerso = ft_strlcat(dest, source, size);
	resultVrai = strlcat(dest2, source2, size);
	printf("RESULT PERSO : %d\n", resultPerso);
	printf("RESULT VRAI : %d\n", resultVrai);
	printf("Perso: %s\n",dest);
	printf("Vrai: %s\n", dest2);
	return (0);
}

- concatener src a la fin de dest sans jamais depasser la
 taille total size du buffer dest.
- on copie le plus possible de src dans dest sans depasser 
size et on retourne la longueur qu'on aurait eu si on avait assez de place
- cas1: pas de place du tout (size=0)
- cas2: size <= len_dest, pas assez de place pour faire quelque chose. 
 on retourn le taille qu'on aurait eu.
- cas3: len_dst < size <= len_dst + len_src, copier jusqu'a size-1 + '\0' 
 et return len total
- cas4: size > len_dst + len_src 
*/

int main(void)
{
	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
	// tout mes cas d'erreurs:
	printf("RESULT PERSO : %zu - VRAI: 13\n", ft_strlcat(dest, src, 6));
	printf("RESULT PERSO : %zu - VRAI: 14\n", ft_strlcat(dest, src, -1));
	printf("RESULT PERSO : %zu - VRAI: 24\n", ft_strlcat(dest, src, 17));
	printf("RESULT PERSO : %zu - VRAI: \n", ft_strlcat(dest, src, 1));
	printf("RESULT PERSO : %zu - VRAI: \n", ft_strlcat(dest, src, 5));
	printf("RESULT PERSO : %zu - VRAI: 3\n", ft_strlcat(dest, "123", 1));
	printf("RESULT PERSO : %zu - VRAI: 3\n", ft_strlcat(dest, "123", 2));
	printf("RESULT PERSO : %zu - VRAI: 14\n", ft_strlcat(dest, src, -1));
	return (0);
}