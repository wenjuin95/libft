/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welow <welow@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:00:03 by welow             #+#    #+#             */
/*   Updated: 2023/10/16 12:00:03 by welow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*result;

	if (s == NULL)
		return (NULL);
	i = 0;
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (result == NULL)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// #include <stdio.h>

// char encrypt(unsigned int index, char c)
// {
//     return c + 1;
// }
// char decrypt(unsigned int index, char c)
// {
//     return c - 1;
// }

// int main()
// {
//     char myString[] = "Hello, World!";
//     char *encryptedString = ft_strmapi(myString, encrypt);
//     printf("Original String: %s\n", myString);
//     printf("Encrypted String: %s\n", encryptedString);
//     char *decryptedString = ft_strmapi(encryptedString, decrypt);
//     printf("Decrypted String: %s\n", decryptedString);

//     free(encryptedString);
//     free(decryptedString);
//     return 0;
// }