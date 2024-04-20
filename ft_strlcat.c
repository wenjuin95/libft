/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welow <welow@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:59:43 by welow             #+#    #+#             */
/*   Updated: 2023/10/16 11:59:43 by welow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d_size;
	size_t	total_size;
	size_t	i;

	if (size == 0 && (src == 0 || dest == 0))
		return (0);
	d_size = ft_strlen(dest);
	i = 0;
	while (src[i] && d_size < size - 1)
	{
		dest[d_size] = src[i];
		d_size++;
		i++;
	}
	dest[d_size] = '\0';
	//check for the total size of the string
	if (size <= d_size) 
		total_size = size + ft_strlen(src);
	else
		total_size = d_size + ft_strlen(src);
	return (total_size); //return a number of characters that should have been copied
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20] = "hello ";
    char s2[] = "world";
    unsigned int length = ft_strlcat(s1, s2, sizeof(s1));
    printf("s1:%s\n", s1);
    printf("total length of s1:%d\n", length);
}*/
