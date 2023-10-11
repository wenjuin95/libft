#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

// #include <stdio.h>
// #include <ctype.h>

// void uppercase(unsigned int index, char *ch)
// {
// 	(void)index;
// 	*ch = toupper(*ch);
// }

// int main() {
//     char str[] = "hello world";

//     printf("Original string: %s\n", str);

//     // Apply the capitalize function to each character in the string
//     ft_striteri(str, uppercase);

//     printf("Capitalized string: %s\n", str);

//     return 0;
// }
