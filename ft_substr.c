/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clement <clement@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 09:57:17 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/04 23:23:41 by clement          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < len && s[start + i])
	{
		ptr[i] = ((char *)s)[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int main()
{
    char            s[50] = "test";
    unsigned int    start = 10;
    size_t          len = 10;

    printf("PERSO: %s\n", ft_substr(s, start, len));
    return (0);
}