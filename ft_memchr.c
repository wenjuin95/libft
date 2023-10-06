#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*str;
	size_t			i;

	str = s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[] = "geek for geeks";
//     char c = ' ';
//     char *ret = memchr(str, c, sizeof(str));
// 	char *ret2 = ft_memchr(str, c, sizeof(str));
//     printf("memchr: string after |%c| is at |%s|\n", c, ret);
// 	printf("ft_memchr: string after |%c| is at |%s|\n", c, ret2);
// }
