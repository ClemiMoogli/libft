/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clement <clement@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:29:17 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/04 09:21:43 by clement          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_lenptr(int nb)
{
	long	tmp;
	int		len;

	tmp = long(nb);
	if (tmp <= 0)
		len = 1;
	if (tmp < 0)
		tmp = -tmp;
	while (tmp > 0)
	{
		tmp = tmp / 10;
		len++;
	}
	return (len);
}

void	write_digits(long nb, char *ptr, int i)
{
	if (nb > 9)
		write_digits(nb / 10, ptr, i+1)
	ptr[i]
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len,
	long	nb;
	int		i;

	i = 0;
	len = ft_lenptr(n);
	ptr = malloc((len + 1) * sizeof(char));
	nb = long(n);
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = -nb;
		i = 1;
	}
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
