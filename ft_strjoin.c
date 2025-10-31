/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:28:38 by cjeannin          #+#    #+#             */
/*   Updated: 2025/10/31 11:55:13 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  i;
    size_t  j;
    char    *ptr;

    i = 0;
    j = 0;
    ptr = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!ptr)
        return (NULL);
    while (s1[i])
    {
        ptr[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        ptr[i] = s2[j];
        i++;
        j++;
    }
    ptr[i] = '\0';
    return (ptr);
}


int main()
{
    char            s1[50] = "Ceci est un test de fonction!";
    char            s2[50] = "Un petit cat!";
    printf("PERSO: %s\n", ft_strjoin(s1, s2));
    return (0);
}