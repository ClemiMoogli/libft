/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:25:15 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/10 10:12:45 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			total;

	total = nmemb * size;
	if (nmemb != 0 && size != 0 && total / nmemb != size)
		return (NULL);
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (total));
	return (ptr);
}
/*
 int	main()
{
	int		*ptr;
	int		*ptr2;

	ptr = (int *)ft_calloc(0, sizeof(int));
	ptr2 = (int *)calloc(0, sizeof(int));
	printf("%d\n",ptr[0]);
	printf("%d\n",ptr2[0]);
	return (0);
} 
int	main()
{
	int		*ptr;
	int		*ptr2;
	size_t	nmemb;
	size_t	size;

	nmemb = 0;
	size  = -1;
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
} */
