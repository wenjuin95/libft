#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1024);
	}
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	char c = 'z';
// 	printf("%d\n", ft_isalpha(c));
// 	printf("%d\n", isalpha(c));
// }
