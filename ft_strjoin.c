#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;
	int		l_join;

	i = 0;
	j = 0;
	l_join = ft_strlen(s1) + ft_strlen(s2);
	if (s1 == 0 || s2 == 0)
		return (0);
	str = (char *)malloc(sizeof(char) * (l_join + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i++] = s2[j++];
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char str1[] = "hello";
	char str2[] = " world";
	char *result = ft_strjoin(str1, str2);
	printf("%s\n", result);
}*/
