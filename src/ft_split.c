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
		while (s[i] != c && s[i])
			i++;
		count++;
	}
	return (count);
}

static char	*string_len(char const *s, char c)
{
	int		len;
	int		i;
	char	*word;

	i = 0;
	len = count_string(s, c);
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**sub_string;
	int		i;
	int		sub_len;

	sub_len = count_string(s, c);
	i = 0;
	sub_string = (char **)malloc(sizeof(char *) * (sub_len + 1));
	if (sub_string == NULL)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != '\0')
		{
			sub_string[i] = string_len(s, c);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	*sub_string[i] = '\0';
	return (sub_string);
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