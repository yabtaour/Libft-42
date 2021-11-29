/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:16:04 by yabtaour          #+#    #+#             */
/*   Updated: 2021/11/14 11:45:28 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_fill(char *str, unsigned int n, int size)
{
	while (n > 0)
	{
		str[size] = 48 + (n % 10);
		size--;
		n = n / 10;
	}
	return (str);
}

static int	ft_size(int n)
{
	size_t	size;

	size = 0;
	if (n <= 0)
		size = 1;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;

	size = ft_size(n);
	str = (char *)ft_calloc((size + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	str = ft_fill(str, n, size - 1);
	return (str);
}
