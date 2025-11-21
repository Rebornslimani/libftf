/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:30:37 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/19 13:57:32 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_cnt_split(char const *s, char c)
{
	size_t	mts;
	size_t	i;

	mts = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			mts += 1;
		i++;
	}
	return (mts);
}

static void	ft_free_all(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static int	ft_split_split(char const *s, char c, char **tab)
{
	int		i;
	int		i_index;
	int		start;
	char	*tmp;

	i = 0;
	i_index = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			tmp = ft_substr(s, start, i - start + 1);
			if (!tmp)
			{
				ft_free_all(tab);
				return (0);
			}
			tab[i_index++] = tmp;
		}
		i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (0);
	tab = ft_calloc((ft_cnt_split(s, c) + 1), sizeof(char *));
	if (!tab)
		return (0);
	if (!ft_split_split(s, c, tab))
		return (0);
	return (tab);
}
// int	main(void)
// {
// 	char	**tab;

// 	tab = ft_split(0, ',');
// 	// __builtin_printf("%s\n",tab[0]);
// 	// __builtin_printf("%s\n",tab[1]);
// 	// __builtin_printf("%s\n",tab[2]);
// 	// __builtin_printf("%s\n",tab[3]);
// 	// __builtin_printf("%s\n",tab[4]);
// 	// __builtin_printf("%s",tab[5]);
// 	free(tab);
// }
