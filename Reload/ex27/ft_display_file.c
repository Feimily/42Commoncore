/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 15:51:56 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/09/28 19:22:36 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define BUFSIZE 1024

#define FILENAME_MISSING "File name missing.\n"
#define TOO_MANY_ARGS "Too many arguments.\n"
#define CANNOT_READ "Cannot read file.\n"

int	main(int argc, char *argv[])
{
	int		fd1;
	int		r;
	char	buffer[BUFSIZE];

	if (argc < 2)
		return (write(2, FILENAME_MISSING, sizeof(FILENAME_MISSING) - 1));
	if (argc > 2)
		return (write(2, TOO_MANY_ARGS, sizeof(TOO_MANY_ARGS) - 1));
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 0)
		return (write(2, CANNOT_READ, sizeof(CANNOT_READ) - 1));
	r = read(fd1, buffer, BUFSIZE);
	while (r > 0)
	{
		write(1, buffer, r);
		r = read(fd1, buffer, BUFSIZE);
	}
	return (0);
}
