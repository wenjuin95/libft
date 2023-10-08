#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
#include <stdio.h>
#include <unistd.h>

int main() {
    int fd = STDOUT_FILENO; // Use the standard output file descriptor (stdout)

    ft_putchar_fd('H', fd); // Write 'H' to stdout
    ft_putchar_fd('i', fd); // Write 'i' to stdout
    ft_putchar_fd('\n', fd); // Write a newline character to stdout

    return 0;
}*/
