/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbongiov <pbongiov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 11:38:00 by pbongiov          #+#    #+#             */
/*   Updated: 2025/04/26 23:10:42 by pbongiov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void	del(void *lst)
{
	(void)lst;
}

int	main(void)
{
	t_list *head = ft_lstnew("Primeiro");

	printf("%s\n", (char *)head->content);
	ft_lstdelone(head, del);
	printf("%s", (char *)head);
}*/