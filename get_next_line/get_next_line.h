/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimani2 <slimani2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 12:53:21 by slimani2          #+#    #+#             */
/*   Updated: 2025/12/02 18:56:50 by slimani2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char    *get_next_line(int fd);
char    *add_to_tmp(int fd, char *tmp);
int	    find_end_line(const char *s, char c);
char    *add_tmp_to_line(char *tmp);
char	*ft_strrchr(const char *s, int c);
int     ft_strlen(char *str);
char    *clean_tmp(char *tmp, unsigned int start, size_t len);
char	*ft_strncat(char *dest, const char *src, unsigned int nb);
char	*ft_strjoin(char const *s1, char const *s2);

#endif