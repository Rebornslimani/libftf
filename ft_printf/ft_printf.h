/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:03:23 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/26 15:47:28 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_parsing(char format, va_list args);
int		ft_print_char(int c);
int		ft_strlen(char *str);
int		ft_print_str(char *str);
int		ft_print_nbr(int n);
void	ft_putnbr(int n);
int		ft_intlen(long n);
int		ft_print_unsigned(unsigned int n);
void	ft_putnbr_unsigned(unsigned int n);
#endif
