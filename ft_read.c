#include "fillit.h"

char	*ft_read(char *av1)
{
	int		fd;
	int		ret;
	int		len;
	char	*buff;

	len = 0;
	fd = open(av1, O_RDONLY);
	buff = ft_strnew(20);
	while ((ret = read(fd, buff, 20)) > 0)
		len += ret;
	close(fd);
	buff = ft_strnew(len);
	fd = open(av1, O_RDONLY);
	ret = read(fd, buff, len);
	close(fd);
	return (buff);
}
