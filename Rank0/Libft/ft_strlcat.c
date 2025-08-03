/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbongiov <pbongiov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:17:57 by pbongiov          #+#    #+#             */
/*   Updated: 2025/04/26 22:20:44 by pbongiov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	if (dest_len >= size)
		return (src_len + size);
	i = 0;
	j = dest_len;
	while (i < size - dest_len - 1 && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char s[20] = "testando ";
	ft_strlcat(s, "teste", sizeof(s));
	printf ("%s\n", s);
	printf ("%zu", ft_strlcat(s, "teste", 5));
}*/