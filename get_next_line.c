/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:29:35 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/31 17:01:59 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strchr(char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	*list = NULL;
	char		*buf;
	ssize_t		rd;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = malloc((BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	rd = read(fd, buf, BUFFER_SIZE);
	if (rd <= 0)
	{
		free(buf);
		return (NULL);
	}
	buf[rd] = '\0';
	return (buf);
}
