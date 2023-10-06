void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	char			*d;
	const char		*s;
	unsigned int	i;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[] = "hello world";
//     char d[12]; 
//     memcpy(d, s, sizeof(char)*12);
//     ft_memcpy(d, s, sizeof(char)*12);
//     printf("memset   :%s\n", d);
//     printf("ft_memcpy:%s\n", d);
//     char e[6];
//     memcpy(e, s+6, sizeof(char)*5);
//     ft_memcpy(e, s+6, sizeof(char)*5);
//     e[5] = '\0';
//     printf("memset   :%s\n", e);
//     printf("ft_memcpy:%s\n", e);
// }
