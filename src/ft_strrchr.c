#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurence;

	last_occurence = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_occurence = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (last_occurence);
}

// #include <stdio.h>
// #include <string.h>
// int main ()
// {
//    const char str[] = "geek for geek";
//    const char ch = ' ';
//    char *ret;
//    char *ret2;
//    ret = strrchr(str, ch);
//    ret2 = ft_strrchr(str, ch);
//    printf("strrchr:|%c| is at |%s|\n", ch, ret);
//    printf("ft_strrchr:|%c| is at |%s|\n", ch, ret2);
//    return(0);
// }
