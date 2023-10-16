/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welow <welow@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:54:39 by welow             #+#    #+#             */
/*   Updated: 2023/10/16 21:51:24 by welow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int* arr_ft_calloc = (int*)ft_calloc(5, sizeof(int));
//     int* arr_calloc = (int*)calloc(5, sizeof(int));  

//     if (arr_ft_calloc == NULL || arr_calloc == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     // Print the contents of arr_malloc
//     printf("Contents of arr_ft_calloc:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", arr_ft_calloc[i]);
//     }
//     printf("\n");

//     // Print the contents of arr_calloc
//     printf("Contents of arr_calloc:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", arr_calloc[i]);
//     }
//     printf("\n");

//     free(arr_ft_calloc);
//     free(arr_calloc);

//     return 0;
// }