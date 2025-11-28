/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utile.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:34:31 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/28 15:26:58 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_print_char('-');
	}
	if (nb >= 0 && nb <= 9)
		ft_print_char(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_putnbr_unsigned(unsigned int nb)
{
	if (nb >= 0 && nb <= 9)
		ft_print_char(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	ft_intlen(long n)
{
	int	result;

	result = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		result++;
	while (n != 0)
	{
		n /= 10;
		result++;
	}
	return (result);
}

void	ft_putnbr_hex(long unsigned int nb, char x, int r)
{
	char	*base;

	base = NULL;
	if (r == 0 && nb != 0)
	{
		ft_print_str("0x");
		r++;
	}
	if (x == 'x')
		base = "0123456789abcdef";
	else if (x == 'X')
		base = "0123456789ABCDEF";
	if (nb >= 16)
		ft_putnbr_hex(nb / 16, x, r);
	ft_putchar(base[nb % 16]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
