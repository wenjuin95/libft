int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (16384);
	}
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     char c = 127;
// 	printf("%d\n", ft_isprint(c));
// 	printf("%d\n", isprint(c)); //return 16384
// }
