#include "libft.h"

static size_t	str_len(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*result;

	i = 0;
	result = (char *)malloc(sizeof(char) * (str_len(s) + 1));
	if (result == NULL)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// #include <stdio.h>
// #include <ctype.h>

// char uppercase(unsigned int i, char c)
// {
// 	(void)i;
//     if (i % 2 == 0)
//         return toupper(c);
//     else
//         return tolower(c);
// }

// int main() {
//     char str[] = "hello, world!";

//     printf("Original string: %s\n", str);

//     // Apply the capitalize function to each character in the string
//     char *result = ft_strmapi(str, &uppercase);

//     printf("Capitalized string: %s\n", result);
// 	free(result);

//     return 0;
// }