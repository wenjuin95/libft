#include "libft.h"

int	ft_strlcpy(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		while (src[i])
		{
			i++;
		}
		return (i);
	}
	while (src[i] && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

// #include <stdio.h>

// int main()
// {
//     char s1[] = "hello";
//     char s2[6];
//     unsigned int length = ft_strlcpy(s2, s1, sizeof(s2));
//     if(length >= sizeof(s2))
//     {
//         printf("error");
//     }
//     else
//     {
//         printf("s1:%s\n", s1);
//         printf("s2:%s\n", s2);
// 	printf("length s2:%d\n", length);
//     }
// }
