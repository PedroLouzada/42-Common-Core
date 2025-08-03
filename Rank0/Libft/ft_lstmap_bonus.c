/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbongiov <pbongiov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:16:04 by pbongiov          #+#    #+#             */
/*   Updated: 2025/04/29 16:20:21 by pbongiov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_elem;
	t_list	*new_list;
	t_list	*temp;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		temp = f(lst->content);
		new_elem = ft_lstnew(temp);
		if (!new_elem)
		{
			del(temp);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}
/*
void	del(void *lst)
{
	(void)lst;
}

void	*to_up(void *s)
{
	char	*str;
	char	*copy;

	copy = ft_strdup(s);
	str = copy;
	while(*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (copy);
}

int	main(void)
{
	t_list *head = ft_lstnew("Primeiro");
	t_list *node1 = ft_lstnew("Segundo");
	t_list *node2 = ft_lstnew("Terceiro");
	t_list *newhead;
	t_list *print;
	head->next = node1;
	node1->next = node2;
	newhead = ft_lstmap(head, to_up, del);
	print = newhead;
	while(print)
	{
		printf("%s\n", (char *)print->content);
		print = print->next;
	}
	free(newhead);
	return (0);
}*/
