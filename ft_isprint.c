/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:39:32 by cjeannin          #+#    #+#             */
/*   Updated: 2025/10/27 15:10:21 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(){
	int	test = 31;
	if (ft_isprint(test))
		printf("PERSO: PRINT\n");
	else
		printf("PERSO: NO PRINT\n");
	if (isprint(test))
		printf("VRAI: PRINT\n");
	else
		printf("VRAI: NO PRINT\n");
	return (0);
}*/
