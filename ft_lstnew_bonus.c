/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeannin <cjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:57:35 by cjeannin          #+#    #+#             */
/*   Updated: 2025/11/11 08:23:16 by cjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
#include <stdlib.h>

int main() {
    t_list *lst = ft_lstnew("1");
    lst->next = ft_lstnew("2");
    lst->next->next = ft_lstnew("3");

    int size = ft_lstsize(lst);
	printf("Size: %d\n", size);
	if (size != 3) return 1;
    free(lst->next->next);
    free(lst->next);
    free(lst);
    return 0;
}*/
