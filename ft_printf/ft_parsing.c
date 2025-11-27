/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:21:01 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/27 16:08:36 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parsing(char format, va_list args)
{
	int	len;

	len = 0;
	if (format == 'd' || format == 'i')
		len = ft_print_nbr(va_arg(args, int));
	else if (format == 'c')
		len = ft_print_char(va_arg(args, int));
	else if (format == 's')
		len = ft_print_str(va_arg(args, char *));
	else if (format == '%')
		return (write(1, "%", 1));
	else if (format == 'u')
		len = ft_print_unsigned((unsigned int)va_arg(args, int));
	else if (format == 'x' || format == 'X')
		len = ft_print_hex(va_arg(args, unsigned int), format, 1);
	else if (format == 'p'){
	 	len = ft_print_hex((unsigned long)va_arg(args, void *), 'x', 0);
		len += 2;
	}
	return (len);
}
