/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:43:33 by aslimani          #+#    #+#             */
/*   Updated: 2025/12/03 14:12:42 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

char    *get_next_line(int fd)
{
	static char	*tmp;
	int			lentot;
	int			len;
	char		*line;

	if (fd < 0)
		return (NULL);
	tmp = get_read(fd, tmp);
	lentot = ft_strlen(tmp);
	len = ft_strchr(tmp, '\n') + 1;
	line = add_tmp_to_line(tmp);
	tmp = clean_tmp(tmp, len, lentot - len);
	return (line);
}

char	*get_read(int fd, char *tmp)
{
	int		readed;
	char	buf[BUFFER_SIZE + 1];
	char	*old_tmp;
	
	if (tmp == NULL)
	{	
		readed = -1;
    	readed = read(fd, buf, BUFFER_SIZE);
		if (readed < 0 || readed == 0)
			return (NULL);
		buf[readed] = '\0';
		while (readed != 0)
		{
			old_tmp = tmp;
			tmp = ft_strjoin(tmp, buf);
			readed = read(fd, buf, BUFFER_SIZE);
			buf[readed] = '\0';
			free(old_tmp);
		}
	}
	return (tmp);
}
char    *add_tmp_to_line(char *tmp)
{
    char    *line;
    int     len;
    int     i;

    i = 0;
    len = ft_strlen(tmp);
    line = malloc(sizeof(char) * len + 1);
    if (!line)
        return (NULL);
    while (tmp[i - 1] != '\n')
    {
        line[i] = tmp[i];
        i++;
    }
    line[i] = '\0';
    return (line);
}
char	*clean_tmp(char *tmp, unsigned int start, size_t len)
{
    char	*str;
    size_t  lens;
    size_t  i;

    i = 0;
    if (!tmp)
        return (0);
    lens = ft_strlen(tmp);
    if (len > lens - start)
            len = lens - start;
    if (start >= lens)
            len = 0;
    str = malloc(sizeof(char) * len + 1);
    if (!str)
         return (0);
    while (i < len && tmp[start + i] != '\0')
    {
            str[i] = tmp[start + i];
            i++;
    }
	str[i] = '\0';
    return (str);
}
