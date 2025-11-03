/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:36:13 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/03 15:22:40 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	result;

	if (n < 0)
	{
		if (n == -2147483648)
			write(fd, "-2147483648", 11);
		else
		{
			n = -n;
			write(fd, "-", 1);
		}
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	result = (n % 10) + '0';
	write(fd, &result, 1);
}
/*
int main()
{
    ft_putnbr_fd(-123,1);
    return (0);
}*/