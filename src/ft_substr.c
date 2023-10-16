/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welow <welow@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:00:28 by welow             #+#    #+#             */
/*   Updated: 2023/10/16 12:00:28 by welow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	sub_len;
	size_t	i;
	char	*substring;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (0);
	if (len > (s_len - start))
		sub_len = s_len - start;
	else
		sub_len = len;
	substring = (char *)malloc(sizeof(char) * (sub_len + 1));
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (i < sub_len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[sub_len] = '\0';
	return (substring);
}

// #include <stdio.h>
// int main() {
//     char input[] = "Hello, World";
//     unsigned int start = 7;
//     size_t len = 5;

//     char *result = ft_substr(input, start, len);

//     if (result != NULL) {
//         printf("Substring: %s\n", result);
//         free(result); // Don't forget to free the allocated memory
//     } else {
//         printf("Substring extraction failed.\n");
//     }

//     return 0;
// }
