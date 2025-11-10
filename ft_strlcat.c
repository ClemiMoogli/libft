/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:36:12 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/10 10:15:46 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lendest(char *dst, size_t size)
{
	size_t	i;

	i = 0;
	while (dst[i] && i < size)
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	j;

	len_dst = ft_lendest(dst, size);
	len_src = ft_strlen(src);
	j = 0;
	if (size == 0 || len_dst == size)
		return (len_dst + len_src);
	while (src[j] && (len_dst + j + 1) < size)
	{
		dst[len_dst + j] = src[j];
		j++;
	}
	dst[len_dst + j] = '\0';
	return (len_dst + len_src);
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


int main(void)
{
	char dest[30]; memset(dest, 0, 30);
	char dest2[30]; memset(dest2, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
	dest2[0] = 'B';

	printf("VRAI : %s\n", dest2);
	return (0);
}*/