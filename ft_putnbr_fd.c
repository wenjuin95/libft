#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
		ft_putchar_fd(nb + 48, fd);
}
/*
#include <stdio.h>
#include <limits.h>
int main(void)
{
	int	fd = 1;
	ft_putnbr_fd(0, fd);
	printf("\n");
	ft_putnbr_fd(-0, fd);
	printf("\n");
	ft_putnbr_fd(+0, fd);
	printf("\n");
	ft_putnbr_fd(INT_MAX, fd);
	printf("\n");
	ft_putnbr_fd(INT_MIN, fd);
	printf("\n");
	ft_putnbr_fd(-10, fd);
	printf("\n");
	ft_putnbr_fd(10, fd);
	printf("\n");
	ft_putnbr_fd(-5623, fd);
	printf("\n");
	ft_putnbr_fd(5623, fd);


	return 0;
}*/
