#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	char	*byte_ptr;
	size_t	i;

	ptr = (void *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	byte_ptr = ptr;
	i = 0;
	while (i < nmemb * size)
	{
		byte_ptr[i] = 0;
		i++;
	}
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