/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:05:45 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/03 10:43:02 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
	int test = 127;
	if (ft_isascii(test))
	{
		printf("PERSO: ASCII\n");
	}
	else 
	{
		printf("PERSO: PAS ASCII\n");
	}
	if (isascii(test))
	{
		printf("VRAI: ASCII\n");
	} 
	else 
	{
		printf("VRAI: PAS ASCII\n");
	}
	return (0);
}*/
