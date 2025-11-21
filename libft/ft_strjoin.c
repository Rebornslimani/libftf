/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:19:37 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/19 13:46:33 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncat(char *dest, const char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		lens1;
	int		lens2;
	int		lentot;

	if (!s1 && !s2)
		return (0);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	lentot = lens1 + lens2;
	str = ft_calloc(lentot + 1, sizeof(char));
	if (!str)
		return (0);
	ft_strncat(str, s1, lens1);
	ft_strncat(str, s2, lentot);
	return (str);
}
// int	main(void)
// {
// 	// char	s1[] = "123456";
// 	// char	s2[] = "789";
// 	char	*str;

// 	str = ft_strjoin(0, 0);
// 	__builtin_printf("%s", str);
// 	free(str);
// 	return (0);
// }