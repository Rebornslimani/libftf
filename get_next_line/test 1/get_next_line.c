/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimani2 <slimani2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:43:33 by aslimani          #+#    #+#             */
/*   Updated: 2025/12/03 21:32:13 by slimani2         ###   ########.fr       */
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
    char        *old;

	if (fd < 0)
		return (NULL);
	tmp = get_read(fd, tmp);
    if(!tmp || tmp[0] == '\0')
    {
        free(tmp);
        tmp = NULL;
        return (NULL);
    }
	lentot = ft_strlen(tmp);
	len = ft_strchr(tmp, '\n');
    if (len == -1)
        len = lentot;
    else
        len += 1;
	line = add_tmp_to_line(tmp, len);
    old = tmp;
	tmp = clean_tmp(tmp, len, lentot - len);
    free(old);
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
		if (readed <= 0)
			return (NULL);
		buf[readed] = '\0';
		while (readed != 0)
		{
			old_tmp = tmp;
			tmp = ft_strjoin(tmp, buf);
            if (!tmp)
            {
                free(old_tmp);
                return (NULL);
            }
			readed = read(fd, buf, BUFFER_SIZE);
			buf[readed] = '\0';
			free(old_tmp);
		}
	}
	return (tmp);
}
char    *add_tmp_to_line(char *tmp, int len)
{
    char    *line;
    int     i;

    i = 0;
    if (!tmp)
        return (NULL);
    line = malloc(sizeof(char) * len + 1);
    if (!line)
        return (NULL);
    while (i < len)
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
