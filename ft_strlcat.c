int	ft_strlcat(char *dest, const char *src, unsigned int n)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;

	d_len = 0;
	while (dest[d_len])
		d_len++;
	s_len = 0;
	while (src[s_len])
		s_len++;
	if (d_len >= n)
		s_len += n;
	else
		s_len += d_len;
	i = 0;
	while (src[i] && (d_len + 1) < n)
	{
		dest[d_len] = src[i];
		d_len++;
		i++;
	}
	dest[d_len] = '\0';
	return (s_len);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s1[20] = "hello ";
//     char s2[] = "world";
//     unsigned int length = ft_strlcat(s1, s2, sizeof(s1));
//     printf("s1:%s\n", s1);
//     printf("total length of s1:%d\n", length);
// }
