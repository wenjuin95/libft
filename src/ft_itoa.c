/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welow <welow@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:06:43 by welow             #+#    #+#             */
/*   Updated: 2023/10/16 17:06:43 by welow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t   num_len(int nb)
{
    size_t  count;

    count = 0;
    if (nb == 0)
        return (1);
    if (nb < 0)
        count += 1;
    while (nb != 0)
    {
        nb /= 10;
        count++;
    }
    return (count);
}

char    *ft_itoa(int n)
{
    char    *str;
    size_t  num;
    size_t  len;
    long  nb;

    nb = n;
    len = num_len(nb);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (NULL);
    if (nb < 0)
    {
        str[0] = '-';
        num = -nb;
    }
    else
        num = nb;
    if (num == 0)
        str[0] = '0';
    str[len] = '\0';
    while (num != 0)
    {
        str[len - 1] = (num % 10) + '0';
        num = num / 10;
        len--;
    } 
    return (str);
}

// #include <stdio.h>
// int main() {
//     int n = -2147483648;
//     char *result = ft_itoa(n);
// 	printf("Integer: %d\n", n);
//     printf("String: %s\n", result);
// 	free(result);
// }