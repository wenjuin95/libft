/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welow <welow@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:55:27 by welow             #+#    #+#             */
/*   Updated: 2023/10/16 11:55:27 by welow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_len(int n)
{
	size_t	i;
	int		nb;

	nb = n;
	i = 1;
	while (nb > 1)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str_nb;
	size_t		nb_len;
	long int	nb;

	nb = n;
	nb_len = num_len(n);
	if (n < 0)
	{
		nb *= -1;
		nb_len++;
	}
	str_nb = (char *)malloc(sizeof(char) * (nb_len + 1));
	if (str_nb == NULL)
		return (NULL);
	str_nb[nb_len] = 0;
	while (nb_len)
	{
		nb_len--;
		str_nb[nb_len] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (n < 0)
		str_nb[0] = '-';
	return (str_nb);
}

// #include <stdio.h>
// int main() {
//     int n = 12345;
//     char *result = ft_itoa(n);
// 	printf("Integer: %d\n", n);
//     printf("String: %s\n", result);
// 	free(result);
// }