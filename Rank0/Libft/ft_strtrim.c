/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbongiov <pbongiov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 18:42:58 by pbongiov          #+#    #+#             */
/*   Updated: 2025/04/27 13:54:36 by pbongiov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, const char *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_check(s1[start], set) != 0)
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_check(s1[end - 1], set) != 0)
		end--;
	str = (char *)malloc((end - start + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, end - start + 1);
	return (str);
}
/*
int	main(void)
{
	printf("%s", ft_strtrim("adwasdawdPedrodwasdawsd", "wasd"));
}*/