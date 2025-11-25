/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cstrprct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:42:35 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/25 14:53:44 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_char(va_arg(args, char))
{
	write(1, &args, 1);
}
int	ft_print_str(va_arg(args, char *))
{
	size_t	i;

	i = 0;
	while (args)
	{
		ft_
	}
}