/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:17:59 by yabtaour          #+#    #+#             */
/*   Updated: 2021/11/14 10:33:08 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	void	*ptr;
	size_t	sizee;

	sizee = count * size;
	ptr = (void *)malloc(sizee);
	if (ptr != NULL)
		ft_bzero(ptr, sizee);
	else
		return (NULL);
	return (ptr);
}
