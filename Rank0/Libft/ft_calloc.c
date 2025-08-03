/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbongiov <pbongiov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:52:33 by pbongiov          #+#    #+#             */
/*   Updated: 2025/04/29 20:20:36 by pbongiov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*var;

	if (size != 0 && num > (size_t)-1 / size)
		return (NULL);
	var = malloc(num * size);
	if (!var)
		return (NULL);
	ft_bzero(var, (num * size));
	return (var);
}
/*
int	main(void)
{
	int	num = 5;
	char *s = ft_calloc(num, sizeof(char));
	char *c = s;

	while (num > 0)
	{
		printf("%c", *c);
		num--;
		c++;
	}
	free(s);
}*/