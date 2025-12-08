/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimani2 <slimani2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 10:33:53 by aslimani          #+#    #+#             */
/*   Updated: 2025/12/08 22:11:53 by slimani2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

// file get next line
char	*get_next_line(int fd);
char	*extract_and_store(int fd, char *buf);
char	*extract_line(char *line, char *buffer);
void	ft_memmove(char *dest, char *src);
char	*error_readed(char *line, char *buffer);
// file utils
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *s1, const char *s2);
char	*ft_strdup(const char *s);
char	find_nl(char *str);
size_t	find_nl_index(char *str);
#endif