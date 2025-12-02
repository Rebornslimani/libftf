/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimani2 <slimani2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 12:53:01 by slimani2          #+#    #+#             */
/*   Updated: 2025/12/02 19:01:02 by slimani2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_next_line(int fd)
{
    char            *line;
    static char     *tmp;
    int             len;
    int             lentot;

    if (fd < 0)
        return (NULL);
    tmp = add_to_tmp(fd, tmp);
    lentot = ft_strlen(tmp);
    tmp = ft_strrchr(tmp, '\n');
    len = ft_strlen(tmp);
    line = add_tmp_to_line(tmp);
    tmp = clean_tmp(tmp, len - 1,lentot - len - 1);
    return (line);
}
char    *add_to_tmp(int fd, char *tmp)
{
    int     readed;
    char    buf[BUFFER_SIZE];
    char    *old_tmp;

    
    readed = -1;
    readed = read(fd, buf, BUFFER_SIZE);
    if (readed < 0 || readed == 0)
        return (NULL);
    buf[readed] = '\0';
    while (!find_end_line(tmp, '\n') && readed != 0)
    {
        old_tmp = tmp;
        tmp = ft_strjoin(tmp, buf);
        readed = read(fd, buf, BUFFER_SIZE);
        if (readed == -1)
            return (NULL);
        buf[readed] = '\0';
        free(old_tmp);
    }
    return (tmp);
}
int	find_end_line(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
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
    while (tmp[i])
    {
        line[i] = tmp[i];
        i++;
    }
    line[i] = '\0';
    return (line);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	lens;

	lens = ft_strlen(s);
	i = lens;
	while ((s[i] != (unsigned char)c) && i > -1)
		i--;
	if (s[i] == (unsigned char)c)
		return ((char *)(s + i));
	return (0);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
char    *clean_tmp(char *tmp, unsigned int start, size_t len)
{
    char	*str;
	size_t	lens;
	size_t	i;

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

char	*ft_strncat(char *dest, const char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		lens1;
	int		lens2;
	int		lentot;

    str = NULL;
	if (!s1 && !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	lentot = lens1 + lens2;
	str = malloc(sizeof(char) * lentot + 1 );
	if (!str)
        return (0);
    str[0] = '\0';
	ft_strncat(str, s1, lens1);
	ft_strncat(str, s2, lens2);
    str[lentot] = '\0';
	return (str);
}
