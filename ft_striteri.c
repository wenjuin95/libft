/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welow <welow@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:57:10 by welow             #+#    #+#             */
/*   Updated: 2023/10/16 11:57:10 by welow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

// #include <stdio.h>
// #include <ctype.h>

// void print_char_and_index(unsigned int index, char *ch) 
// {
//     printf("Character at index %u: %c\n", index, *ch);
// }

// int main() 
// {
//     char myString[] = "Hello, World!";
//     ft_striteri(myString, print_char_and_index);
// }
