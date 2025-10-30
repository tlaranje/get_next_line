/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:29:35 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/30 16:32:29 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*get_next_line(int fd)
{
	int		fd;
	char	*buf;
	size_t	bytes;

	fd = open(fd, O_RDWR);
	if(fd == -1)
		return (NULL);

}

static char	*_fill_line_buffer(int fd, char *left_c, char *buffer)
{

}

char	*_set_line(char *line_buffer)
{

}

int main(void)
{

	return (0);
}
