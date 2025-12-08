/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 10:33:26 by aslimani          #+#    #+#             */
/*   Updated: 2025/12/08 16:01:59 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	size_t		len;

	if (fd < 0)
		return (NULL);
	line = extract_and_store(fd, buffer);
	if (!line || line[0] == '\0')
	{
		free(line);
		return (NULL);
	}
	line = extract_line(line);
	len = find_nl_index(buffer);
	len += 1;
	if (find_nl(line))
		ft_memmove(buffer, buffer + len);
	else
		buffer[0] = '\0';
	return (line);
}

char	*extract_and_store(int fd, char *buffer)
{
	int		readed;
	char	*line;

	//line = ft_strdup("");
	line = NULL;
	if (buffer[0] != '\0')
	{
		line = ft_strjoin(line, buffer);
		if (find_nl(buffer))
			return (line);
		buffer[0] = '\0';
	}
	readed = BUFFER_SIZE;
	while (!find_nl(buffer) && readed > 0)
	{
		readed = read(fd, buffer, BUFFER_SIZE);
		if (readed < 0)
			return (error_readed(line, buffer));
		if (readed == 0)
			break ;
		buffer[readed] = '\0';
		line = ft_strjoin(line, buffer);
	}
	return (line);
}

void	ft_memmove(char *dest, char *src)
{
	size_t	i;

	i = 0;
	if (!dest || !src)
		return ;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*error_readed(char *line, char *buffer)
{
	free(line);
	buffer[0] = '\0';
	return (NULL);
}

char	*extract_line(char *line)
{
	int		i;

	i = 0;
	while (line[i] != '\0' && line[i] != '\n')
	{
		line[i] = line[i];
		i++;
	}
	if (line[i] == '\n')
		i++;
	line[i] = '\0';
	return (line);
}
