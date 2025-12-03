/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimani2 <slimani2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:43:15 by aslimani          #+#    #+#             */
/*   Updated: 2025/12/03 21:37:49 by slimani2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char    *get_next_line(int fd);
char	*get_read(int fd, char *tmp);
size_t	ft_strlen(const char *str);
char	*ft_strncat(char *dest, const char *src, unsigned int nb);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s);
int		ft_strchr(const char *s, int c);
char    *add_tmp_to_line(char *tmp, int len);
char	*clean_tmp(char *tmp, unsigned int start, size_t len);
#endif