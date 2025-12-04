/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:26:58 by aslimani          #+#    #+#             */
/*   Updated: 2025/12/04 15:23:55 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

// file get next line
char	*get_next_line(int fd);
char	*extract_line(int fd, char *buf);
// file utils
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
void	ft_memmove(char *dest, char *src);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strncat(char *dest, const char *src, unsigned int nb);
char    *ft_strdup(const char *s);
int		ft_Rstrchr(const char *s, int c);
char	*ft_substr(char *tmp, unsigned int start, size_t len);
#endif
