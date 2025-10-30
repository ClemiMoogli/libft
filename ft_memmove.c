/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:11:12 by cjeannin          #+#    #+#             */
/*   Updated: 2025/10/28 12:32:19 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	i;
	char	*d;
	char	*s;
	char	tmp;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	while (i < size)
	{
		tmp = s[i];
		d[i] = tmp;
		tmp = '\0';
		i++;
	}
	return (dest);
}

/*
int	main()
{
	char	src[50] = "Helloo World";
	char	dest[50] = "Ceci est la chaine de dest";

	printf("%s\n", dest);
	ft_memmove(dest, src, 4);;
	printf("%s\n", dest);
	return (0);
}*/
