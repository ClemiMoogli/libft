/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:51:31 by cjeannin          #+#    #+#             */
/*   Updated: 2025/10/27 14:50:54 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main()
{
	int test = '@';
	if (ft_isalnum(test))
	{
		printf("PERSO: ALNUM\n");
	}
	else {
		printf("PERSO: PAS ALNUM\n");
	}
	if (isalnum(test))
	{
		printf("VRAI: ALNUM\n");
	}
	else {
		printf("VRAI: PAS ALNUM\n");
	}
	return (0);
}*/
