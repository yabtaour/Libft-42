/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:46:24 by yabtaour          #+#    #+#             */
/*   Updated: 2021/11/14 10:28:58 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	size_t	needle_s;
	size_t	i;
	char	*haystack1;
	size_t	len2;

	len2 = len;
	haystack1 = (char *)haystack;
	i = 0;
	needle_s = ft_strlen(needle);
	if (needle_s == 0)
		return (haystack1);
	while (haystack1[i] != '\0' && i < len2)
	{
		if (ft_strncmp(haystack1 + i, needle, needle_s) == 0 && needle_s <= len)
			return (haystack1 + i);
		else
			i++;
		len--;
	}
	return (NULL);
}
