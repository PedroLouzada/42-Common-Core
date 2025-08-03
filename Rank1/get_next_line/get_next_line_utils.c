/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbongiov <pbongiov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 17:42:54 by pbongiov          #+#    #+#             */
/*   Updated: 2025/05/16 18:24:50 by pbongiov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	if (s == NULL)
		return (0);
	while (s[len])
	{
		if (s[len++] == '\n')
			break ;
	}
	return (len);
}

char	*buffer_clear(char *s, int f)
{
	int	i;
	int	j;

	j = 0;
	if (!f)
	{
		i = ft_strlen(s);
		while (s[i + j])
		{
			s[j] = s[i + j];
			j++;
		}
	}
	while (s[j])
		s[j++] = '\0';
	return (s);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (free(s1), NULL);
	i = 0;
	while (s1 && s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i++] = s2[j];
		if (s2[j++] == '\n')
			break ;
	}
	str[i] = '\0';
	return (free(s1), str);
}

int	check_newline(char *temp)
{
	int	i;

	i = 0;
	while (temp[i])
	{
		if (temp[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
