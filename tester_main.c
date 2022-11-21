#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "tester.h"

int main(int ac, char **av)
{
	int		fd;
	char	*line;

	(void)ac;
	fd = open(av[1], O_RDONLY);
	line = gnl(fd);
	while (line)
	{	
		printf("%s", line);
		free(line);
		line = gnl(fd);
	}
	close(fd);
	free(line);
	return 0;
}
