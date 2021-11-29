/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:06:31 by yabtaour          #+#    #+#             */
/*   Updated: 2021/11/14 10:58:35 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	dst_len2;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	dst_len2 = dst_len;
	if (dst_len >= dstsize || dstsize == 0)
		return (src_len + dstsize);
	while (src[i] != '\0' && dst_len < dstsize - 1)
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (dst_len2 + src_len);
}
