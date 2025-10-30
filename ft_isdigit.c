/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:41:21 by cjeannin          #+#    #+#             */
/*   Updated: 2025/10/27 14:42:05 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(){
	int test = '9';
	if (ft_isdigit(test)){
		printf("PERSO: DIGIT\n");
	}
	else {
		printf("PERSO: PAS DIGIT\n");
	}
	if (isdigit(test))
	{
		printf("VRAI : DIGIT\n");
	}
	else {
		printf("VRAI: PAS DIGIT\n");
	}
	return (0);
}*/
