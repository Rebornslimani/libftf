/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:48:43 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/19 10:36:58 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	ft_size(int n)
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

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = ft_size(n);
	str = ft_calloc(len + 1, sizeof (char));
	if (!str)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		i++;
	}
	while (len > i)
	{
		len--;
		str[len] = ft_abs(n % 10) + 48;
		n /= 10;
	}
	return (str);
}
// int	main(void)
// {
// 	char	*tmp;

// 	tmp = ft_itoa();
// 	__builtin_printf("%s", tmp);
// 	free(tmp);
// }