/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:47:53 by yabtaour          #+#    #+#             */
/*   Updated: 2021/11/14 11:41:47 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	src_s;
	size_t	i;

	i = 0;
	src_s = ft_strlen(src);
	if (dstsize == 0)
		return (src_s);
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_s);
}
