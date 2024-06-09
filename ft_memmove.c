/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welow <welow@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:55:48 by welow             #+#    #+#             */
/*   Updated: 2023/10/16 11:55:48 by welow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// memmove handle overlapping memory regions safely. It's slightly slower because it checks for overlap and handles it by copying the data in a different order to avoid data corruption.
//memcpy doesn't handle overlapping memory regions. If the source and destination memory regions overlap in memcpy, it can lead to undefined behavior, potentially causing data corruption or program crashes.
//if copy to new destination memcpy is more efficient

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*d;
	const char		*s;
	size_t			i;

	if (dest == 0 && src == 0)
		return (0);
	d = dest;
	s = src;
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	return (d);
}

// #include <stdio.h>
// #include <string.h>

// int main() 
// {
//     char s1[8] = "abcdefg";
//     char s2[8] = "abcdefg";

//     // printf("Before:\n");
//     // printf("string: %s\n\n", s1);

//     // memmove(s1+2, s1, 4);
//     // memcpy(s2+2, s2, 4);

//     // // printf("After:\n");
//     // // printf("s1 (memmove): %s\n", s1); // Expected: "ababcdg"
//     // // printf("s2 (memcpy): %s\n", s2); // will not work as expected

// 	// // //memmove copy the src into abuffer then copy the buffer into dest
// 	// // //memcpy copy the src directly into dest

// 	printf("Before:\n");
//     printf("string: %s\n\n", s1);

// 	printf("After:\n");
// 	memmove(s1+2, s1, 4);
// 	printf("memmove: %s\n", s1);
// 	ft_memmove(s2+2, s2, 4);
// 	printf("ft_memmove: %s\n", s2);

//     return 0;
// }
