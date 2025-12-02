/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimani2 <slimani2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 18:53:52 by slimani2          #+#    #+#             */
/*   Updated: 2025/12/02 19:02:23 by slimani2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(void)
{
    int fd;
    char *line;

    // Ouvre le fichier en lecture
    fd = open("file.txt", O_RDONLY);
    if (fd < 0)
    {
        perror("Erreur ouverture fichier");
        return 1;
    }

    // Appelle get_next_line jusqu'à ce qu'elle retourne NULL
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("Ligne : %s\n", line);
        free(line);  // libère la mémoire après utilisation
    }

    close(fd);  // ferme le fichier
    return 0;
}
