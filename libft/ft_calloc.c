/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:28:22 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/20 08:50:11 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*loc;

	if (nmemb != 0 && size > SSIZE_MAX / nmemb)
		return (0);
	loc = malloc(nmemb * size);
	if (!loc)
		return (0);
	ft_memset(loc, 0, size * nmemb);
	return (loc);
}
