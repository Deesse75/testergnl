#ifndef TESTER_H
# define TESTER_H
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include "../get_next_line.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8
# endif

char	*gnl(int fd);
char	*ft_read(int fd, char **buf);
char	*ft_get_line(char **save);
int		ft_strchr(const char *s, int c);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);

#endif
