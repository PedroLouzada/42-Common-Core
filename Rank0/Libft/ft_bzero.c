/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbongiov <pbongiov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:28:00 by pbongiov          #+#    #+#             */
/*   Updated: 2025/04/26 18:11:39 by pbongiov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char *s = (char *)malloc(10);
	int len = 9;

	if (!s)
		return (0);
	ft_bzero(s, len);
	while (len > 0)
	{
		printf("%c", *s);
		len--;
		s++;
	}
	return (0);
}*/