/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 09:57:17 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/10 10:16:57 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	sub_len(size_t slen, size_t start, size_t len)
{
	size_t	max;

	if (start >= slen)
		return (0);
	max = slen - start;
	if (len < max)
		return (len);
	return (max);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	slen;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	i = sub_len(slen, (size_t)start, len);
	ptr = (char *)ft_calloc(i + 1, 1);
	if (!ptr)
		return (NULL);
	if (i)
		ft_memcpy(ptr, s + start, i);
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