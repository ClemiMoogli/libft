/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:20:51 by cjeannin          #+#    #+#             */
/*   Updated: 2025/10/30 14:24:14 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	result;
	int	i;
	int sign;

	sign = 1;
	i = 0;
	result = 0;
	if (nptr[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (nptr[i])
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
			result = result * 10 + nptr[i] - '0';
		else
			return (result * sign);
		i++;
	}
	return (result * sign);
}

int	main()
{
	char	result[50] = "-05824fdr4471";
	printf("PERSO: %d\n", ft_atoi(result));
	printf("VRAI: %d\n", atoi(result));
	return (0);
}
