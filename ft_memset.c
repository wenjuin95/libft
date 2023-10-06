#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char			*byte_s;
	size_t			i;

	byte_s = s;
	i = 0;
	while (i < n)
	{
		byte_s[i] = c;
		i++;
	}
	return (s);
}

// #include <stdio.h> 
// #include <string.h> 
// int main() 
// { 
//    char buffer[10];
//    char *s1 = memset(buffer, 'A', sizeof(buffer));
//    char *s2 = ft_memset(buffer, 'A', sizeof(buffer));
//    printf("memset   :%s\n", s1);
//    printf("ft_memset:%s\n", s2);
// } 
