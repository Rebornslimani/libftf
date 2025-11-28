/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:07:44 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/28 15:21:37 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		return_value;
	va_list	args;

	va_start(args, format);
	return_value = 0;
	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			return_value += ft_parsing(*format, args);
		}
		else
			return_value += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (return_value);
}
