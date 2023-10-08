#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	while (s[i])
	{
		write(fd, &s[i], 1);
	}
}
/*
#include <stdio.h>
#include <unistd.h>

int main() {
    int fd = STDOUT_FILENO; // Use the standard output file descriptor (stdout)

    putstr_fd("Hello, World!\n", fd); // Write the string to stdout

    return 0;
}*/
