/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 09:57:17 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/06 10:52:30 by cjeannin         ###   ########.fr       */
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
	if ((start > ft_strlen(s)))
		return (ptr);
	while (i < len && s[start + i])
	{
		ptr[i] = ((char *)s)[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int main() {
    char *s = "hola";
    char *sub;

    sub = ft_substr(s, 4, 1);
	printf("%s\n", sub);
    if (sub == NULL || strcmp(sub, "") != 0) {
        if (sub) free(sub);
        return 1;
    }
    free(sub);

    sub = ft_substr(s, 3, 1);
	printf("%s\n", sub);
    if (sub == NULL || strcmp(sub, "a") != 0) {
        if (sub) free(sub);
        return 1;
    }
    free(sub);

    return 0;
}*/