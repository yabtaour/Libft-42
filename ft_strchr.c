/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:11:04 by yabtaour          #+#    #+#             */
/*   Updated: 2021/11/14 10:17:41 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	*str;
	unsigned char	k;

	k = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (str[i] != '\0' && str[i] != k)
		i++;
	if (str[i] != k)
		return (NULL);
	else
		return ((char *)str + i);
}
