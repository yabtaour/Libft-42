/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:12:21 by yabtaour          #+#    #+#             */
/*   Updated: 2021/11/14 10:26:55 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void	*s1, const void	*s2, size_t	n)
{
	const char	*s11;
	const char	*s22;
	size_t		i;

	i = 0;
	s11 = s1;
	s22 = s2;
	if (n == 0)
		return (0);
	while (s11[i] == s22[i] && n > 1)
	{
		n--;
		i++;
	}
	return ((unsigned char)s11[i] - (unsigned char)s22[i]);
}
