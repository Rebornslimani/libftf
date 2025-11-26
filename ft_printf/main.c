/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:06:06 by aslimani          #+#    #+#             */
/*   Updated: 2025/11/26 15:36:59 by aslimani         ###   ########.fr       */
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
	printf ("%d\n",ft_printf("%u\n", -1));
	printf ("%d\n",printf("%u ", -1));
	return (0);
}
