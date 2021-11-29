/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:03:13 by yabtaour          #+#    #+#             */
/*   Updated: 2021/11/10 16:07:49 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c1;
	char	*s1;

	s1 = (char *)s;
	c1 = c;
	i = ft_strlen(s);
	while (i > 0 && s[i] != c1)
		i--;
	if (s[i] == c1)
		return (s1 + i);
	else
		return (NULL);
}
