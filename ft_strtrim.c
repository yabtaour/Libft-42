/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:24:42 by yabtaour          #+#    #+#             */
/*   Updated: 2021/11/14 11:41:56 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	last;
	char	*ptr;

	ptr = NULL;
	if (s1 != NULL && set != NULL)
	{
		start = 0;
		last = ft_strlen(s1);
		while (s1[start] != '\0' && ft_strchr(set, s1[start]))
			start++;
		while (ft_strchr(set, s1[last - 1]) && last > start)
			last--;
		ptr = (char *)malloc(sizeof(char) * (last - start + 1));
		if (ptr)
			ft_strlcpy(ptr, s1 + start, last - start + 1);
	}
	return (ptr);
}
