/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:01:31 by gloms             #+#    #+#             */
/*   Updated: 2023/05/05 14:41:25 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
	char *line;
	int fd;
	int i = 0;
	fd = open("test.txt", O_RDONLY);
	line = get_next_line(fd);
	
	 while (line)
    {
		printf("%s", line);
        free(line);
        line = get_next_line(fd);
		i++;
    }
	free(line);
	close(fd);
}