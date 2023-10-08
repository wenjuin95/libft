#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
#include <stdio.h>
#include <unistd.h>

int main() {
    int fd = STDOUT_FILENO; // Use the standard output file descriptor (stdout)

    ft_putstr_fd("Hello, World!", fd); // Write the string to stdout

    return 0;
}*/
