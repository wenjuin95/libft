/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welow < welow@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:54:39 by welow             #+#    #+#             */
/*   Updated: 2024/06/09 14:43:44 by welow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#1
This check helps ensure that ft_calloc behaves safely and predictably, preventing undefined behavior and potential security issues.
1. Avoids division by zero.
2. Prevents integer overflow when calculating the total number of bytes to allocate.
(the function returns NULL, indicating that the allocation request is invalid.)

Valid Case:
len = 10, size = 4: The total allocation size is 40 bytes, which is valid and won't overflow.

Overflow Case:
len = UINT_MAX, size = 2: UINT_MAX * 2 would overflow, so len > UINT_MAX / size evaluates to true, and the function returns NULL.

Zero Size Case:
len = 10, size = 0: size != 0 is false, so the condition fails and the function doesn't return NULL immediately based on this check. The subsequent malloc would handle this case.
This check helps ensure that ft_calloc behaves safely and predictably, preventing undefined behavior and potential security issues.
*/
void	*ft_calloc(size_t len, size_t size)
{
	void	*ptr;


	if (size != 0 && len > UINT_MAX / size) //prevent overflow [ref #1]
		return (NULL);
	ptr = (void *)malloc(len * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (len * size));
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

// int main()
// {
// 	//int len = 2147483645;
// 	// int max = 1073741824;
// 	int max = 2147483647;
// 	int len = max;
// 	int len2 = max;
// 	int *i = calloc(len, sizeof(int));
// 	if (i == NULL)
// 	{
// 		printf("len: failed to allocate memory\n");
// 	}
// 	else
// 	{
// 		printf("len: Memory allocated successfully\n");
// 	}

// 	int *j = ft_calloc(len2, sizeof(int));
// 	if (j == NULL)
// 	{
// 		printf("len2: failed to allocate memory\n");
// 	}
// 	else
// 	{
// 		printf("len2: Memory allocated successfully\n");
// 	}
// }
