#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../get_next_line/get_next_line_bonus.h"

int main(int ac, char **av)
{
	char	*line;

	(void)ac;
	int fd1 = open(av[1], O_RDONLY);
	int fd2 = open(av[2], O_RDONLY);
	int fd3 = open(av[3], O_RDONLY);
	int fd4 = open(av[4], O_RDONLY);
	int fd5 = open(av[5], O_RDONLY);
	int fd6 = open(av[6], O_RDONLY);
	int fd7 = open(av[7], O_RDONLY);
	int fd8 = open(av[8], O_RDONLY);
	int fd9 = open(av[9], O_RDONLY);
	
	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	line = get_next_line(fd4);
	printf("%s", line);
	free(line);
	line = get_next_line(fd5);
	printf("%s", line);
	free(line);
	line = get_next_line(fd6);
	printf("%s", line);
	free(line);
	line = get_next_line(fd7);
	printf("%s", line);
	free(line);
	line = get_next_line(fd8);
	printf("%s", line);
	free(line);
	line = get_next_line(fd9);
	printf("%s", line);
	free(line);

	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	line = get_next_line(fd4);
	printf("%s", line);
	free(line);
	line = get_next_line(fd5);
	printf("%s", line);
	free(line);
	line = get_next_line(fd6);
	printf("%s", line);
	free(line);
	line = get_next_line(fd7);
	printf("%s", line);
	free(line);
	line = get_next_line(fd8);
	printf("%s", line);
	free(line);
	line = get_next_line(fd9);
	printf("%s", line);
	free(line);

	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	line = get_next_line(fd4);
	printf("%s", line);
	free(line);
	line = get_next_line(fd5);
	printf("%s", line);
	free(line);
	line = get_next_line(fd6);
	printf("%s", line);
	free(line);
	line = get_next_line(fd7);
	printf("%s", line);
	free(line);
	line = get_next_line(fd8);
	printf("%s", line);
	free(line);
	line = get_next_line(fd9);
	printf("%s", line);
	free(line);

	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	line = get_next_line(fd4);
	printf("%s", line);
	free(line);
	line = get_next_line(fd5);
	printf("%s", line);
	free(line);
	line = get_next_line(fd6);
	printf("%s", line);
	free(line);
	line = get_next_line(fd7);
	printf("%s", line);
	free(line);
	line = get_next_line(fd8);
	printf("%s", line);
	free(line);
	line = get_next_line(fd9);
	printf("%s", line);
	free(line);

	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	line = get_next_line(fd4);
	printf("%s", line);
	free(line);
	line = get_next_line(fd5);
	printf("%s", line);
	free(line);
	line = get_next_line(fd6);
	printf("%s", line);
	free(line);
	line = get_next_line(fd7);
	printf("%s", line);
	free(line);
	line = get_next_line(fd8);
	printf("%s", line);
	free(line);
	line = get_next_line(fd9);
	printf("%s", line);
	free(line);

	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	line = get_next_line(fd4);
	printf("%s", line);
	free(line);
	line = get_next_line(fd5);
	printf("%s", line);
	free(line);
	line = get_next_line(fd6);
	printf("%s", line);
	free(line);
	line = get_next_line(fd7);
	printf("%s", line);
	free(line);
	line = get_next_line(fd8);
	printf("%s", line);
	free(line);
	line = get_next_line(fd9);
	printf("%s", line);
	free(line);

	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	line = get_next_line(fd4);
	printf("%s", line);
	free(line);
	line = get_next_line(fd5);
	printf("%s", line);
	free(line);
	line = get_next_line(fd6);
	printf("%s", line);
	free(line);
	line = get_next_line(fd7);
	printf("%s", line);
	free(line);
	line = get_next_line(fd8);
	printf("%s", line);
	free(line);
	line = get_next_line(fd9);
	printf("%s", line);
	free(line);

	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	line = get_next_line(fd4);
	printf("%s", line);
	free(line);
	line = get_next_line(fd5);
	printf("%s", line);
	free(line);
	line = get_next_line(fd6);
	printf("%s", line);
	free(line);
	line = get_next_line(fd7);
	printf("%s", line);
	free(line);
	line = get_next_line(fd8);
	printf("%s", line);
	free(line);
	line = get_next_line(fd9);
	printf("%s", line);
	free(line);

	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	line = get_next_line(fd4);
	printf("%s", line);
	free(line);
	line = get_next_line(fd5);
	printf("%s", line);
	free(line);
	line = get_next_line(fd6);
	printf("%s", line);
	free(line);
	line = get_next_line(fd7);
	printf("%s", line);
	free(line);
	line = get_next_line(fd8);
	printf("%s", line);
	free(line);
	line = get_next_line(fd9);
	printf("%s", line);
	free(line);

	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	line = get_next_line(fd4);
	printf("%s", line);
	free(line);
	line = get_next_line(fd5);
	printf("%s", line);
	free(line);
	line = get_next_line(fd6);
	printf("%s", line);
	free(line);
	line = get_next_line(fd7);
	printf("%s", line);
	free(line);
	line = get_next_line(fd8);
	printf("%s", line);
	free(line);
	line = get_next_line(fd9);
	printf("%s", line);
	free(line);

	line = get_next_line(fd1);
	printf("%s", line);
	free(line);
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	line = get_next_line(fd4);
	printf("%s", line);
	free(line);
	line = get_next_line(fd5);
	printf("%s", line);
	free(line);
	line = get_next_line(fd6);
	printf("%s", line);
	free(line);
	line = get_next_line(fd7);
	printf("%s", line);
	free(line);
	line = get_next_line(fd8);
	printf("%s", line);
	free(line);
	line = get_next_line(fd9);
	printf("%s", line);
	free(line);

	close(fd1);
	close(fd2);
	close(fd3);
	close(fd4);
	close(fd5);
	close(fd6);
	close(fd7);
	close(fd8);
	close(fd9);
	return 0;
}