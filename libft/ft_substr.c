/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:26:42 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/19 13:46:40 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	lens;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	lens = ft_strlen(s);
	if (len > lens - start)
		len = lens - start;
	if (start >= lens)
		len = 0;
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (0);
	while (i < len && s[start + i] != '\0')
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
// int	main(void)
// {
// 	char	*str;
// 	str = ft_substr(0, 0, 2);
// 	__builtin_printf("%s", str);
// 	free(str);
// 	return (0);
// }