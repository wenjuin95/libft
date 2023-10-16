/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welow <welow@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:56:42 by welow             #+#    #+#             */
/*   Updated: 2023/10/16 11:56:42 by welow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_string(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	*strcopy(const char *str, size_t n)
{
	size_t	i;
	char	*result;
	if (str == NULL)
		return (NULL);
	result = malloc(sizeof(char) * n + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len;
	char	**split;
	char	**sub_str;
	
	i = 0;
    len = count_string(s, c);
    split = (char **)malloc(sizeof(char *) * (len + 1)); 
    sub_str = split; 
    if (s == NULL || split == NULL)
        return NULL;
    while (*s)
    {
        while (*s && *s == c)
            s++;
        if (*s == '\0')
            break;
        const char *start = s;
        while (*s && *s != c)
            s++;
        split[i] = strcopy(start, s - start);
        i++;
    }
    split[i] = NULL; 
    return sub_str;
}

// int main() {
//     const char *input_string = "Hello World This Is A Test";
//     char **result = ft_split(input_string, ' ');

//     // Print the split substrings
//     for (int i = 0; result[i] != NULL; i++) {
//         printf("Substring %d: %s\n", i, result[i]);
//         free(result[i]);  // Free the memory allocated for each substring
//     }

//     // Free the array of strings
//     free(result);

//     return 0;
// }