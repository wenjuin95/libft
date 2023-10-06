#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s1[] = "hello";
//     char s2[] = "hezlo";
//     printf("strncmp: %d\n", strncmp(s1, s2, 0));
//     printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, 0));
// }
