/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:32:36 by aslimani          #+#    #+#             */
/*   Updated: 2025/12/05 11:28:15 by aslimani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(void)
{
    int fd;
    char *line;
	int	i;

	i = 0;
    fd = open("text.txt", O_RDONLY);
    while (i < 2)
    {
		line = get_next_line(fd);
        printf("Ligne : %s", line);
        free(line);
		i++;
    }
    close(fd);
    return 0;
}
