/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 09:49:09 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/19 13:49:31 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ischarset(const char	*s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		lens;
	int		len;

	lens = 0;
	if (s1 == 0)
		return (0);
	len = ft_strlen(s1);
	while (ft_ischarset(set, s1[lens]))
		lens++;
	while (ft_ischarset(set, s1[len - 1]))
		len--;
	str = ft_substr(s1, lens, len - lens);
	return (str);
}
// int	main(void)
// {
// 	char	*str;
// 	str = ft_strtrim(0, "123456");
// 	__builtin_printf("%s", str);
// 	free(str);
// 	return (0);
// }