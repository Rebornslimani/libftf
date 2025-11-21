/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:29:24 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/11 15:34:15 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c += 32);
	return (c);
}
/*int	main(void)
{
	int	c;

	c = 'a';
	__builtin_printf("%d\n", ft_tolower(c));
	__builtin_printf("%d", tolower(c));
	return (0);
}*/