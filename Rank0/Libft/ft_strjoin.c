/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbongiov <pbongiov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 18:21:12 by pbongiov          #+#    #+#             */
/*   Updated: 2025/04/27 19:25:16 by pbongiov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (char *)s1, size + 1);
	ft_strlcat(str, (char *)s2, size + 1);
	return (str);
}
/*
int	main(void)
{
	char *str = ft_strjoin("testando ", "teste");
	printf ("%s", str);
	free(str);
}*/