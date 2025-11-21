/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:08:35 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/11 10:32:34 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	j;

	if ((n == 0) || (dest == 0 && src == 0))
		return (dest);
	j = n - 1;
	if (src > dest)
	{
		dest = ft_memcpy(dest, src, n);
	}
	else
	{
		while (j > 0)
		{
			((unsigned char *)dest)[j] = ((const unsigned char *)src)[j];
			j--;
		}
		((unsigned char *)dest)[j] = ((const unsigned char *)src)[j];
	}
	return (dest);
}
/*int	main(void)
{
	char str[] = "abcdef";
	ft_memmove(str, str + 1, 4);
	__builtin_printf("%s",str);
	return (0);
}*/