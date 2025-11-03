/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:27:56 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/03 10:43:03 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
	{
		return (0);
	}
	return (1);
}
/*
#include <ctype.h>
#include <stdio.h>
int main(){
	int c = '8';
	if(ft_isalpha(c)){
		printf("Fonction perso : C'est un caractere alphabetique\n");
	}
	else {
		printf("Fonction perso : Ce n'est pas un caractere alpha\n");
	}
	if (isalpha(c))
	{
		printf("VRAI FUNCTION: C'est un caractere alphabetique\n");
	}
	else {
		printf("VRAI FUNCTION: Ce n'est pas un caractere alpha\n");
	}
	return (0);
}*/
