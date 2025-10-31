/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:36:12 by cjeannin          #+#    #+#             */
/*   Updated: 2025/10/28 15:48:47 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	j;

	len_dst = 0;
	len_src = 0;
	j = 0;
	i = 0;
	while (dst[len_dst])
		len_dst++;
	while (src[len_src])
		len_src++;
	// on va rencontrer le null terminator
	if (size > (len_dst + len_src))
	{
		i = len_dst;
		while (src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (size); 
	}
	// on ne rencontre pas le null
	while (len_dst < size - 1)
		dst[len_dst] = src[i++];
	return (len_dst + len_src);
}


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


// 
