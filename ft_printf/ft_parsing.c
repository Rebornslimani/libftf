/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:21:01 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/26 14:52:51 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parsing(char format, va_list args)
{
	int	len;

	if (format == 'd' || format == 'i')
		len = ft_print_nbr(va_arg(args, int));
	if (format == 'c')
		len = ft_print_char(va_arg(args, int));
	if (format == 's')
		len = ft_print_str(va_arg(args, char *));
	if (format == '%')
		return (write(1, "%", 1));
	if (format == 'u')
		len = ft_print_unsigned((unsigned int)va_arg(args, int));
	// if (format == 'x' || format == 'X')
	// 	len = ft_print_hex(va_arg(args, int));
	// if (format == 'p')
	// 	len = ft_print_ptr(va_arg(args, void *));
	return (len);
}
