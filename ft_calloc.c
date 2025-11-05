/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:25:15 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/05 09:42:53 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

/* void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if ((nmemb == 0) || (size == 0))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (i < size)
		((int *)ptr)[i++] = 0;
	return (ptr);
} */

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			i;
	size_t			total;

	if (nmemb != 0)
		return (NULL);
	total = nmemb * size;	
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total)
		ptr[i++] = 0;
	return (ptr);
}


/*
int	main()
{
	int		*ptr;
	int		*ptr2;
	size_t	nmemb;
	size_t	size;
	size_t	i;

	i = 0;
	nmemb = 0;
	size  = sizeof(int);
	ptr = (int *)ft_calloc(nmemb, size);
	ptr2 = (int *)calloc(nmemb, size);
	printf("%d\n",ptr[0]);
	printf("%d\n",ptr2[0]);
	while (ptr[i])
	{
		printf("PERSO: %d\n", ptr[i]);
		i++;
	}
	i = 0;
	while (ptr2[i])
	{
		printf("VRAI: %d\n", ptr2[i]);
		i++;
	}
	return (0);
}*/
