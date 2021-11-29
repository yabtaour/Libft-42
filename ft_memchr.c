/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:01:52 by yabtaour          #+#    #+#             */
/*   Updated: 2021/11/14 10:26:33 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t	n)
{
	unsigned char	*s1;
	unsigned char	c1;
	int				i;

	s1 = (unsigned char *)s;
	c1 = c;
	i = 0;
	if (n == 0)
		return (NULL);
	while (s1[i] != c1 && n > 1)
	{
		i++;
		n--;
	}
	if (s1[i] == c1)
		return (s1 + i);
	else
		return (NULL);
}
