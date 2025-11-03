/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:41:53 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/03 10:42:42 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char    *ft_strrchr(const char *s, int c)
{
    int     i;
    char    *result;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            result = (char *)&s[i];
        i++;
    }
    if (result[0] == c)
        return (result);
    return (NULL);
}
/*
int main()
{
    char    str[50] = "un Zebre a ete aperZU dans le jardin";
    int     c = 'Z';
    printf("PERSO: %s\n", ft_strrchr(str, c));
    printf("VRAI: %s\n", strrchr(str, c));
    return (0);
}*/
