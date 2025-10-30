/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:09:09 by cjeannin          #+#    #+#             */
/*   Updated: 2025/10/27 15:09:26 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char	*string = "Bonjour ceci est le test strlen!";
	printf("String de test : %s\n", string);
	printf("PERSO: %ld\n",ft_strlen(string));
	printf("VRAI: %ld\n", strlen(string));
	return (0);
}*/
