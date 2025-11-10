/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:09:09 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/10 10:16:05 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
int	main()
{
	char	*string = "Test";
	printf("String de test : %s\n", string);
	printf("PERSO: %ld\n",ft_strlen(string));
	printf("VRAI: %ld\n", strlen(string));
	return (0);
}*/
