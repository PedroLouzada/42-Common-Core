/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_treatment.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbongiov <pbongiov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:36:38 by pbongiov          #+#    #+#             */
/*   Updated: 2025/07/27 18:36:54 by pbongiov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int check_map_content(char *row, t_game *game)
{
	int i;
	
	i = 0;
	while(row[i])
	{
		if (row[i] == 'P')
			game->map.player++;
		else if (row[i] == 'E')
			game->map.exit++;
		else if (row[i] == 'C')
			game->map.collectable++;
		else if (row[i] == '0')
			game->map.empty_space++;
		i++;
	}
	return (0);
}

int map_validation(char *file_name, t_game *game)
{
	int i;
	int fd;
	int row;
	char *s;
	
	i = 0;
	row = map_rows_and_rectangular(file_name);
	fd = open(file_name, O_RDONLY);
	s = get_next_line(fd);
	if (!s)
		error_msg();
	while (s)
	{
		if (!check_map_border(s) && i == 0)
			error_msg();
		check_map_content(s, game);
		if (!check_map_border(s) && row == i + 1)
		{
			printf("Map_bottom\n");
			error_msg();
		}
		s = get_next_line(fd);
		i++;
	}
	if (!(game->map.player == 1 && game->map.exit == 1 && game->map.collectable && game->map.empty_space))
		error_msg();
	close(fd);
	return (0);
}

int flood_fill()