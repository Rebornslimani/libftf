/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:49:58 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/21 11:59:33 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	lenl;

	lenl = ft_strlen(little);
	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	if (big[0] == '\0')
		return (0);
	if (lenl > len)
		return (0);
	while (big[i] != '\0' && i <= len - lenl)
	{
		if (ft_strncmp(big + i, little, lenl) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (0);
}
/*int	main(void)
{
	// char	big [] = "jglsn hi jfkjbf";
	// char	little [] = "hi";
	// size_t	len = 8;

	__builtin_printf("%s", ft_strnstr(0, "9", 13));
	return (0);
}*/