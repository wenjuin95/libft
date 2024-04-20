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
	char	*sub_str;
	size_t	i;
	size_t	size;

	if (s == NULL)
		return (NULL);
	if ((size_t)ft_strlen(s) < start)
		len = 0;
	else if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	size = ft_strlen(s + start);
	sub_str = malloc(sizeof(char) * (len + 1));
	if (sub_str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub_str[i] = s[i + start];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
// #include <stdio.h>
// int main() {
//     char input[] = "test";
//     unsigned int start = 1;
//     size_t len = 2;

//     char *result = ft_substr(input, start, len);

//     if (result != NULL) {
//         printf("Substring: %s\n", result);
//         free(result); // Don't forget to free the allocated memory
//     } else {
//         printf("Substring extraction failed.\n");
//     }

//     return 0;
// }
