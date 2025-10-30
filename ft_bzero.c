/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:57:37 by cjeannin          #+#    #+#             */
/*   Updated: 2025/10/28 10:26:35 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
		str[i++] = '\0';
}

/*
#include <strings.h>
int	main()
{
	char	test[50] = "123";
	char	test2[50] = "123";
	ft_bzero(test, 2);
	bzero(test2, 2);
	printf("PERSO: %s\n", test);
	printf("VRAI:%s\n", test2);
	return (0);
}*/
