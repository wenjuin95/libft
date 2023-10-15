#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main ()
// {
//    const char str[] = "geek for geek";
//    const char ch = ' ';
//    char *ret;
//    char *ret2;
//    ret = strchr(str, ch);
//    ret2 = ft_strchr(str, ch);
//    printf("strrchr:|%c| is at |%s|\n", ch, ret);
//    printf("ft_strrchr:|%c| is at |%s|\n", ch, ret2);
//    return(0);
// }
