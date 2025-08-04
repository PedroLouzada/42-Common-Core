/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_treatment_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbongiov <pbongiov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:35:54 by pbongiov          #+#    #+#             */
/*   Updated: 2025/08/04 20:06:40 by pbongiov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	return (i);
}

void row_and_col_len(t_game *game, char *filename)
{
	int i;
	int fd;
	char *s;

	i = 0;
	fd = open(filename, O_RDONLY);
	s = get_next_line(fd);
	game->map.width = ft_strlen(s);
	while(s && s[0] != '\n')
	{
		i++;
		free(s);
		s = get_next_line(fd);
	}
	free(s);
	close(fd);
	game->map.height = i;
}
