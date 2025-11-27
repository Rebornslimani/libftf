/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:06:06 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/27 16:10:09 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	// char	c = '5';
	// char	*str = "yo tout le monde";
	// char	*str1 = "salut";
	
	// ft_printf("%s %c %s %% %%", str, c, str1);
	//ft_printf("%s %s ", "", "-");
	//ft_printf("%d\n",ft_printf("%x", 12351));
	//printf("%d",printf("%x", 12351));

	void	*b = "2454545";

	printf("len real = %d\n", printf("%p\n", b));
	printf("len FT = %d\n", ft_printf("%p\n", b));
	return(0);
}
