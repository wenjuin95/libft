#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     char c = 127;
// 	printf("%d\n", ft_isascii(c));
//     printf("%d\n", isascii(c)); //return 1
// }
