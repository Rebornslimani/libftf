/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:07:44 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/25 15:15:02 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	int return_value;
	int	count;
	va_list args;
	va_start(args, format);

	count = 0;
	while (*format)
	{
		if (format == '%')
		{
			format++;
			return_value = ft_parsing(args, format);
			//count = ft_strlen(return_value); compte le nombre de caractere que je dois print
		}
		else
			write(1, &format, 1);
		format++;
	}
	va_end(args);
	return (count);
}