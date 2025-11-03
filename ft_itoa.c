/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:29:17 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/03 10:42:59 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int ft_int_len(int nb, int p)
{
    if ((nb / 10) <= 0)
        return (p);
    return (ft_int_len(nb/10, p + 1));
}

int ft_power(int n, int p)
{
    int i;
    int result;

    i = 1;
    result = n;
    while (i < p)
    {
        result = result * n;
        i++;
    }
    return (result);
}

char    *ft_itoa(int n)
{
    char    *ptr;
    int     i;
    int     sign;
    int     nb;

    i = 0;
    sign = 1;
    // gerer le int min
    if (n == -2147483648)
        return ("-2147483648");
    // gerer les nonbres negatifs
    if (n < 0)
    {
        n *= -1;
        sign = -1;
    }
    if (sign == -1)
        ptr = malloc(ft_int_len(n, 10) + 2 * sizeof(char));
    else
        ptr = malloc(ft_int_len(n, 10) + 1 * sizeof(char));
    if (!ptr)
        return (NULL);
    // affichage nombre
    if (sign == -1);
    {
        ptr[0] = '-';
        i++;
    }
    while (i < ft_int_len(n, 10))
    {
        
    }
    ptr[i] = '\0';
        return (ptr);
}


// gerer le cas, si nomnre == 0;
// Ajouter le if nombre negatif alors ajouter '-' devant et malloc + 1;
/*char    *ft_itoa(int n)
{
   int  i;
   int sign;
   int  power;
   int  len_s;
   char  *ptr;
   
   i = 0;
   sign = 0;
   if (n < 0)
   {
       sign = 1;
       n = n * -1;
   }
   power = calculate_power(n, 0);
   if (sign == 1)
        len_s = power + 1;
    else 
        len_s = power;
   ptr = malloc((len_s + 1) * sizeof(char));
   printf("len_s: %d\n", len_s);
   if (!ptr)
       return (NULL);
   while (i <= len_s)
   {
        //printf("len_s : %d\n", len_s);
        //printf("i : %d\n", i);
       if (i == 0 && sign == 1)
       {
           ptr[i] = '-';
           i++;
       }
       if (n / ft_power(10, power) <= 0)
       {
           ptr[i] = (n % ft_power(10, power)) + '0';
           i++;
       }
       ptr[i] = (n / ft_power(10, power)) + '0';
       n = n % ft_power(10, power);
       i++;
       power--;
   }
    ptr[i] = '\0';
    return (ptr);
}*/

/*
int main()
{
    char    *result;
    result = ft_itoa(1245611);
    printf("Calculate power %s\n", result);
    free(result);
    return (0);
}*/
