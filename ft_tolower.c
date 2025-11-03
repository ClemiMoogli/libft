/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:42:20 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/03 10:42:40 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}

#include <stdio.h>
#include <ctype.h>
/*
int main()
{
    int c;

    c = 'Z';
    printf("PERSO: %c\n", ft_tolower(c));
    printf("VRAI: %c\n", tolower(c));
    return (0);
}*/
