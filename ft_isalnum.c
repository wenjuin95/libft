int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
	{
		return (8);
	}
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     char c = '9';
//     printf("%d\n", ft_isalnum(c));
//     printf("%d\n", isalnum(c)); //will return 8
// }
