/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:11:12 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/05 15:35:31 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (d < s)
	{
		while (i < size)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (size > i)
		{
			size--;
			d[size] = s[size];
		}
	}
	return (dest);
}

/*
int main() {
    char buffer1[] = "abcdefghijklmnop";
    char buffer2[] = "abcdefghijklmnop";
	int	result;
    // Décalage vers la droite (overlap)
    memmove(buffer1 + 2, buffer1, 10);
    ft_memmove(buffer2 + 2, buffer2, 10);

    if (strcmp(buffer1, buffer2) != 0) return 1;
	result = strcmp(buffer1, buffer2);
	printf("%d\n", result);
    return 0;
}
*/