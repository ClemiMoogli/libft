/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:41:53 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/04 16:05:18 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// KO AUSSI
#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			result = (char *)&s[i];
		i++;
	}
	return (NULL);
}


int main() {
    char str[] = "Hello";
    char *result1;
	char *result2;

    result1 = strrchr(str, '\\0');
    result2 = ft_strrchr(str, '\\0');

	printf("%s\n", result2);
    //if (result1 != result2) return 1;
    //if (result2 != &str[5]) return 1;

    return 0;
}
/*
int main()
{
    char    str[] = "";
    int     c = 'Z';
    printf("PERSO: %s\n", ft_strrchr(str, c));
    printf("VRAI: %s\n", strrchr(str, c));
    return (0);
}*/
