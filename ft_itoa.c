/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:29:17 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/03 16:36:15 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_lenptr(int nb)
{
	int	p;

	p = 0;
	if (nb < 0)
		p++;
	while ((nb / 10) > 0)
	{
		nb = nb / 10;
		p++;
	}
	return (p);
}

int	ft_power(int n, int p)
{
	int	i;
	int	result;

	i = 1;
	result = n;
	while (i < p)
	{
		result = result * n;
		i++;
	}
	return (result);
}

// gerer le cas, si nomnre == 0;
// Ajouter le if nombre negatif alors ajouter '-' devant et malloc + 1;
char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(ft_lenptr(n) + 1 * sizeof(char));
	if (n < 0)
	{
		if (n == 0)
			return ("0");
		if (n == -2147483648)
			return ("-2147483648");
		else
		{
			ptr[i] = '-';
			n = -n;
			i++;
		}
	}
	if (n > 9)
	{
		ft_itoa(n / 10);
	}
	ft_itoa(n / 10);
	return (ptr);
}

int main()
{
	char    *result;
	result = ft_itoa(1245611);
	printf("Calculate power %s\n", result);
	free(result);
	return (0);
}
