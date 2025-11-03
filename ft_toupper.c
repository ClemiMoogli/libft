/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:42:30 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/03 10:42:34 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
    {
        c = c - 32;
    }
    return (c);
}
/*
int main()
{
    int c;

    c = 'r';
    printf("PERSO: %c\n", ft_toupper(c));
    printf("VRAI: %c\n", toupper(c));
    return (0);
}*/
