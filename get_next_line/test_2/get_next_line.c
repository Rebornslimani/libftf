/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimani2 <slimani2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:25:13 by aslimani          #+#    #+#             */
/*   Updated: 2025/12/04 22:29:31 by slimani2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char    *get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char	*line;
	int		len;
	int		lentot;
	char	*old;
	int		is_end_of_file;

	is_end_of_file = 0;
	if (fd < 0)
		return (NULL);
	line = extract_line(fd, buffer);
	if (!line || line[0] == '\0')
	{
		free(line);
		return (NULL);
	}
	lentot = ft_strlen(line);
	len = ft_Rstrchr(line, '\n');
	if (len == -1)
	{
		is_end_of_file = 1;
		len = lentot;
	}
	else
		len += 1;
	old = line;
	line = ft_substr(old, 0, len);
	free(old);
	if(!is_end_of_file)
		ft_memmove(buffer, buffer + len);
	else
		buffer[0] = '\0';
	return (line);
}

char	*extract_line(int fd, char *buf)
{
	int		readed;
	char	*line;
	char	*old_line;

	line = ft_strdup("");
	if (buf[0] != '\0')
	{
		old_line = line;
		line = ft_strjoin(old_line, buf);
		free(old_line);
		if(ft_strchr(buf, '\n'))
			return (line);
		buf[0] = '\0';
	}
	readed = BUFFER_SIZE;
	while (!ft_strchr(buf, '\n') && readed > 0)
	{
		readed = read(fd, buf, BUFFER_SIZE);
		if(readed <= 0)
			break;
		buf[readed] = '\0';
		old_line = line;
		line = ft_strjoin(old_line, buf);
		free(old_line);
	}
	return (line);
}

char	*ft_substr(char *tmp, unsigned int start, size_t len)
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

// #include <stdio.h>
// #include <fcntl.h>
// #include "get_next_line.h"

// int main(void)
// {
//     int fd;
//     char *line;
// 	int	i;

// 	i = 0;
//     fd = open("test.txt", O_RDONLY);
//     if (fd < 0)
//     {
//         printf("%s", "Erreur ouverture fichier");
//         return 1;
//     }
// 	line = get_next_line(fd);
//     printf("Ligne : %s", line);
//     free(line);
//     close(fd);
//     return 0;
// }
