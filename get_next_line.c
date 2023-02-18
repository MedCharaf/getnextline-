

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int			ch7al9ra;
	char		*sos;
	static char	*zebala;

	sos = ft_calloc(BUFFER_SIZE, 1);
	ch7al9ra = 1;
	if (zebala)
	{
		sos = ft_strjoin(sos, zebala);
		free(zebala);
		zebala = NULL;
	}
	sos = reader(fd, &ch7al9ra, sos);
	if (sos && ft_strchr(sos, '\n') != -1)
	{
		zebala = ft_substr(sos, ft_strchr(sos, '\n') + 1, ft_strchr(sos, '\0'));
		sos = newsos(sos);
	}
	if (ch7al9ra == 0 && ft_strlen(sos) == 0)
	{
		free(sos);
		return (NULL);
	}
	return (sos);
}

char	*newsos(char *strlwl)
{
	char	*strjdid;

	strjdid = ft_substr(strlwl, 0, ft_strchr(strlwl, '\n') + 1);
	free(strlwl);
	return (strjdid);
}

char	*reader(int fd, int *ch7al9ra, char *sos)
{
	char	*buffer;

	buffer = ft_calloc(BUFFER_SIZE + 1, 1);
	while ((ft_strchr(buffer, '\n') == -1) && (*ch7al9ra > 0))
	{
		ft_bzero(buffer, BUFFER_SIZE);
		*ch7al9ra = read(fd, buffer, BUFFER_SIZE);
		if (*ch7al9ra < 0)
		{
			free(sos);
			free(buffer);
			return (NULL);
		}
		sos = ft_strjoin(sos, buffer);
	}
	free(buffer);
	return (sos);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*b;

	i = 0;
	b = (char *)s;
	while (i < n)
	{
		b[i] = '\0';
		i++;
	}
}
// int main()
// {
//     int fd = open("test.txt", O_RDONLY);
//     printf("%s", get_next_line(fd));
//     printf("%s", get_next_line(fd));
//         printf("%s", get_next_line(fd));
//                 printf("%s", get_next_line(fd));
//                                 printf("%s", get_next_line(fd));
//                                                                 printf("%s",

// }
