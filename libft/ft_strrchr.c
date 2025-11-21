/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:43:05 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/12 12:01:40 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	lens;

	lens = ft_strlen(s);
	i = lens;
	while ((s[i] != (unsigned char)c) && i > -1)
		i--;
	if (s[i] == (unsigned char)c)
		return ((char *)(s + i));
	return (0);
}
/*int	main(void)
{
	char	src[] = "hello world";
	int	c = 'l';

	__builtin_printf("%s", ft_strrchr(src, c));
	return (0);
}*/