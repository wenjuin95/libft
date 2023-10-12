#include "libft.h"

static size_t	check_str(char c, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;
	size_t	i;

	i = 0;
	start = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[start] && check_str(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && check_str(s1[end - 1], set))
		end--;
	trim = (char *)malloc(sizeof(char) * (end - start + 1));
	if (trim == NULL)
		return (NULL);
	while (start < end)
	{
		trim[i] = s1[start];
		i++;
		start++;
	}
	trim[i] = '\0';
	return (trim);
}

// #include <stdio.h>
// int main()
// {
// 	char *s1 = "toHello, World!to";
// 	char *set = "to ";  // The set contains space and tab characters.
// 	char *trim = ft_strtrim(s1, set);
// 	printf("%s\n", trim);
// 	free(trim);
// }