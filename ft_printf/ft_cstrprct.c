/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cstrprct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:42:35 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/26 15:49:36 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_print_char(int c)
{
	int	len;

	len = write(1, &c, 1);
	return (len);
}

int	ft_print_str(char *str)
{
	int	len;
	int	ret_len;

	if (str == NULL)
	{
		ret_len = write(1, "(null)", 6);
		return (ret_len);
	}
	len = ft_strlen(str);
	ret_len = write(1, str, len);
	return (ret_len);
}

int	ft_print_nbr(int n)
{
	int	len;

	ft_putnbr(n);
	len = ft_intlen(n);
	return (len);
}

int	ft_print_unsigned(unsigned int n)
{
	int	len;

	ft_putnbr_unsigned(n);
	len = ft_intlen(n);
	return (len);
}
