/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:30:27 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/17 08:46:15 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <bsd/string.h>

size_t	ft_strlcat(char	*dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lend;
	size_t	lens;

	i = 0;
	lend = ft_strlen(dest);
	lens = ft_strlen(src);
	if (size <= lend)
		return (lens + size);
	while (src[i] != 0 && i < (size - lend - 1))
	{
		dest[lend + i] = src[i];
		i++;
	}
	dest[lend + i] = '\0';
	return (lens + lend);
}
/*int	main(void)
{
	char	dest[] = "ABCD";
	char	src [] = "BCD";
	//__builtin_printf("%zu\n", ft_strlcat(dest, src, 6));
	//__builtin_printf("%zu\n", strlcat(dest, src, 6));
	strlcat(dest, src, 6);
	__builtin_printf("%s", dest);
}*/