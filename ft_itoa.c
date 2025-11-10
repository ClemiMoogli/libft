/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:29:17 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/10 10:13:27 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenptr(int nb)
{
	long	tmp;
	int		len;

	len = 0;
	tmp = (long)nb;
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

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;
	long	nb;
	int		i;

	i = 0;
	nb = (long)n;
	len = ft_lenptr(n);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = -nb;
		i++;
	}
	while (len > i)
	{
		ptr[len - 1] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (ptr);
}

/*
int main()
{
	char    *result;
	//result = ft_atoi((e + "+1").c_str());
	//result = ft_itoa((e + "+101").c_str());
	//result = ft_itoa((e + "+42lyon").c_str());
	printf("%s\n", result);
	free(result);
	return (0);
}
*/