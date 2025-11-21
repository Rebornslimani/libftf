/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:53:22 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/11 15:25:42 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
	{
		c -= 32;
		return (c);
	}
	return (c);
}
/*int	main(void)
{
	int	c;

	c = '\n';
	__builtin_printf("%d\n", ft_toupper(c));
	__builtin_printf("%d", toupper(c));
	return (0);
}*/