/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimani2 <slimani2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:43:35 by aslimani          #+#    #+#             */
/*   Updated: 2025/12/03 20:51:47 by slimani2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strncat(char *dest, const char *src, unsigned int nb)
{
    unsigned int    i;
    unsigned int    j;

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
	if (!s1)
		return (ft_strdup(s2));
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

char    *ft_strdup(const char *s)
{
        int		j;
        int		len;
        char    *dest;

        j = 0;
        len = ft_strlen(s);
        dest = malloc(sizeof(char) * (len + 1));
        if (!dest)
                return (0);
        while (s[j] != '\0')
        {
                dest[j] = s[j];
                j++;
        }
        dest[j] = '\0';
        return (dest);
}

size_t ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str && str[i])
        i++;
    return (i);
}
int    ft_strchr(const char *s, int c)
{
	int     i;

    i = 0;
    if (!s)
        return (-1);
    while (s[i] != '\0')
    {
        if (s[i] == (unsigned char)c)
            return (i);
        i++;
    }
    if ((unsigned char)c == '\0')
        return (i);
    return (-1);
}
