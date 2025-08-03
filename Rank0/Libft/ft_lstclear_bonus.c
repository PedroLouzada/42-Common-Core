/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbongiov <pbongiov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:13:59 by pbongiov          #+#    #+#             */
/*   Updated: 2025/04/26 23:05:57 by pbongiov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
/*
void	del(void *lst)
{
	(void)lst;
}
int	main(void)
{
	t_list *head = ft_lstnew("Primeiro");
	t_list *node1 = ft_lstnew("Segundo");
	t_list *node2 = ft_lstnew("Terceiro");

	head->next = node1;
	node1->next = node2;
	t_list *temp = head;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	temp = head;
	ft_lstclear(&head, del);
	printf("%s", (char *)temp);
}*/