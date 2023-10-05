int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char *str = "hello";
//     printf("%d",ft_strlen(str));
//     printf("%ld", strlen(str));
// }
