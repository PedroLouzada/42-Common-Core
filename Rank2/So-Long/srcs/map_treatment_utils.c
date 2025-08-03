/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_treatment_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbongiov <pbongiov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:11:40 by pbongiov          #+#    #+#             */
/*   Updated: 2025/07/27 18:29:34 by pbongiov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int	ft_strlen_and_border_check(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] != '\n')
		i++;
	if (s[0] != '1' || s[i - 1] != '1')
		error_msg();
	return (i);
}

int	check_map_border(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != '1' && s[i] != '\n' && s[i] != '\0')
			return (0);
		i++;
	}
	return (1);
}

int	map_rows_and_rectangular(char *file_name)
{
	int		fd;
	int		i;
	int		line_size;
	char	*s;

	i = 0;
	fd = open(file_name, O_RDONLY);
	s = get_next_line(fd);
	line_size = ft_strlen_and_border_check(s);
	while (1)
	{
		s = get_next_line(fd);
		if (!s)
			return (i + 1);
		if (line_size != ft_strlen_and_border_check(s))
			error_msg();
		line_size = ft_strlen_and_border_check(s);
		i++;
	}
	close(fd);
	return (i);
}
