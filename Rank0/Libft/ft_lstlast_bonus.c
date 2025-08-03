/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbongiov <pbongiov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:37:33 by pbongiov          #+#    #+#             */
/*   Updated: 2025/04/27 12:59:30 by pbongiov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list *head = ft_lstnew("Primeiro");
	t_list *node1 = ft_lstnew("Segundo");
	t_list *node2 = ft_lstnew("Terceiro");

	head->next = node1;
	node1->next = node2;
	printf("%s", (char *)ft_lstlast(head)->content);
}*/
