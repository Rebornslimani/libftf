/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslimani <aslimani@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:45:21 by aslimani          #+#    #+#             */
/*   Updated: 2025/12/03 14:13:30 by aslimani         ###   ########.fr       */
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
    fd = open("test.txt", O_RDONLY);
    if (fd < 0)
    {
        printf("%s", "Erreur ouverture fichier");
        return 1;
    }

    while (i < 5)
    {
		line = get_next_line(fd);
        printf("Ligne : %s", line);
        free(line);
		i++;
    }
    close(fd);
    return 0;
}
