/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:32:36 by aslimani          #+#    #+#             */
/*   Updated: 2025/12/08 15:45:55 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(void)
{
	int		fd;
    char	*line;
	int		i;

	i = 0;
	fd = open("big_line_with_nl", O_RDONLY);
	while (i < 4)
	{
		line = get_next_line(fd);
		printf("Ligne : %s", line);
		free(line);
		i++;
	}
	close(fd);
	return 0;
}
