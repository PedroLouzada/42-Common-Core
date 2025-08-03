/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbongiov <pbongiov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 17:42:57 by pbongiov          #+#    #+#             */
/*   Updated: 2025/05/16 18:24:37 by pbongiov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	s[BUFFER_SIZE + 1];
	char		*line;
	int			rd;

	if (fd < 0)
		return (NULL);
	rd = 1;
	line = NULL;
	while (1)
	{
		if (*s == '\0')
			rd = read(fd, s, BUFFER_SIZE);
		if (rd < 0)
			return (buffer_clear(s, 1), free(line), NULL);
		if (rd == 0)
			return (line);
		line = ft_strjoin(line, s);
		if (!line)
			return (buffer_clear(s, 1), NULL);
		buffer_clear(s, 0);
		if (line && check_newline(line))
			break ;
	}
	return (line);
}

/* int	main(void)
{
	char *s;
	int fd = open("teste.txt", O_RDONLY);

	s = get_next_line(fd);
	free(s);
	s = get_next_line(fd);
	free(s);
	s = get_next_line(fd);
	free(s);
} */