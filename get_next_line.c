#include "get_next_line.h"

char	*next_line(char *src, int fd)
{
	char	*buffer;
	int	size;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE +1));
	if (buffer == NULL)
	{
		free (buffer);
		return (NULL);
	}
	size = 1;
	while (!ft_strchr(src, '\n') && size != 0)
	{
		size = read(fd, buffer, BUFFER_SIZE);
		if (size == -1)
		{
			free (buffer);
			return (NULL);
		}
		buffer[size] = '\0';
		src = ft_strjoin(src, buffer);
	}
	free (buffer);
	return (src);
}

char	*get_next_line(int fd)
{
	char	*line;
	static char	*next_line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	next_line = next_line(next line, fd)
}
