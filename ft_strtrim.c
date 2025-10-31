/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:55:42 by cjeannin          #+#    #+#             */
/*   Updated: 2025/10/31 14:08:28 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_isSep(char c, char const *sep)
{
    int i;

    i = 0;
    while (sep[i])
    {
        if (c == sep[i])
            return (1);
        i++;
    }
    return (0);
}

int ft_startingIndex(char const *s1, char const *set)
{
    int index;

    index = 0;
    while (ft_isSep(s1[index], set))
        index++;
    return (index);
}

int ft_endingIndex(char const *s1, char const *set)
{
    int index;
    int i;

    i = 0;
    index = -1;
    while (s1[i])
    {
        if (ft_isSep(s1[i], set))
        {
            if (index == -1)
                index = i;
            
        }
        else
            index = -1;
        i++;
    }
    return (index);
}

char    *ft_strtrim(char const*s1, char const *set)
{
    int     index_debut;
    int     index_fin;
    int     len_ptr;
    int     i;
    char    *ptr;

    i = 0;
    index_debut = ft_startingIndex(s1, set);
    index_fin = ft_endingIndex(s1, set);
    len_ptr = index_fin - index_debut;
    ptr = malloc((len_ptr + 1) * sizeof(char));
    if (!ptr)
        return (NULL);
    while (i < len_ptr)
    {
        ptr[i] = s1[index_debut];
        i++;
        index_debut++;
    }
    ptr[i] = '\0';
    return (ptr);
}

int main()
{
    char    s1[50] = "  ceci est un test  ";
    char    set[50] = " ";
    printf("Index debut: %d\n", ft_startingIndex(s1, set));
    printf("Index fin: %d\n", ft_endingIndex(s1, set));
    printf("PERSO: %s\n", ft_strtrim(s1, set));
    return (0);
}