/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:03:59 by yabtaour          #+#    #+#             */
/*   Updated: 2021/11/14 10:37:11 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	size_t	size;
	char	*ptr;

	size = ft_strlen(s1);
	ptr = (char *) ft_calloc(size + 1, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	else
		ptr = ft_memcpy(ptr, s1, size);
	return (ptr);
}
