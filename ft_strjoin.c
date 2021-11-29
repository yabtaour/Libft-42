/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:20:28 by yabtaour          #+#    #+#             */
/*   Updated: 2021/11/14 11:03:31 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_strcat(char *s1, char const *s2, char const *s3)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s2[i] != '\0')
	{
		s1[j] = s2[i];
		j++;
		i++;
	}
	i = 0;
	while (s3[i] != '\0')
	{
		s1[j] = s3[i];
		i++;
		j++;
	}
	return (s1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = (char *)ft_calloc(len, sizeof(char));
	if (ptr != NULL)
	{
		ptr = ft_strcat(ptr, s1, s2);
		return (ptr);
	}
	return (NULL);
}
