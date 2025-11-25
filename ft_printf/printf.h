/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:03:23 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/25 14:15:47 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRINTF_H
# define PRINTF_H

#include <stdarg.h>
#include <stdlib.h>

int	ft_parsing(const char *format, va_list args);
int	ft_print_char(va_arg(args, char));
#endif
