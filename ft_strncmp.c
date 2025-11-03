/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:41:40 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/03 15:28:46 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	char    s1[50] = "cBCA";
	char    s2[50] = "ABCD";
	size_t  size = 5;
	printf("PERSO: %d\n", ft_strncmp(s1, s2, size));
	printf("PERSO: %d\n", strncmp(s1, s2, size));
	return (0);
}*/
