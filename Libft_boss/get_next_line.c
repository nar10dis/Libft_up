/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:46:34 by nadeluge          #+#    #+#             */
/*   Updated: 2024/12/16 18:38:14 by nadeluge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line/get_next_line.h"

char	*ft_read_line(char *next_line, char *buffer, int fd)
{
	char	*tmp;
	int		bytes_read;

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		if (!next_line)
			next_line = ft_strdup("");
		tmp = ft_strjoin(next_line, buffer);
		if (!tmp)
			return (free(next_line), NULL);
		free(next_line);
		next_line = tmp;
		if (ft_strchr(buffer, '\n') > 0)
			break ;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	if (bytes_read == -1)
		return (free(next_line), NULL);
	return (next_line);
}

char	*ft_take_line(char	*next_line)
{
	int		i;
	char	*str;

	str = NULL;
	i = 0;
	while (next_line[i] != '\n' && next_line[i] != '\0')
		i++;
	if (next_line[i] == '\n')
		str = ft_substr(next_line, 0, i + 1);
	else if (next_line[i] == '\0')
		str = ft_strdup(next_line);
	if (!str)
		return (free(next_line), NULL);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*next_line[1024];
	char		*line_rdy;
	char		*buffer;
	char		*tmp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	next_line[fd] = ft_read_line(next_line[fd], buffer, fd);
	free(buffer);
	if (!next_line[fd] || ft_strlen(next_line[fd]) == 0)
		return (free(next_line[fd]), next_line[fd] = NULL, NULL);
	line_rdy = ft_take_line(next_line[fd]);
	if (!line_rdy)
		return (NULL);
	tmp = ft_strdup(&next_line[fd][ft_strlen(line_rdy)]);
	if (!tmp)
		return (free(line_rdy), NULL);
	free(next_line[fd]);
	next_line[fd] = tmp;
	return (line_rdy);
}

// int	main(void)
// {
// 	int	fd;
// 	char	*line;
// 	int	i;

// 	i = 1;
// 	line = "Hello";
// 	fd = open("doc.txt", O_RDONLY);
// 	if (fd < 0)
// 	{
// 		printf("Error opening the file");
// 		return (0);
// 	}
// 	while (line != NULL)
// 	{
// 		line = get_next_line(fd);
// 		if (line != NULL)
// 			printf("appel numero %d : %s", i, line);
// 		i++;
// 		free(line);
// 	}
//	fd 
// 	close(fd);
// 	return (0);
// }