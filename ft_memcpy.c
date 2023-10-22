/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:18:18 by ralanes           #+#    #+#             */
/*   Updated: 2023/10/22 17:24:19 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	c;
	char	*d;
	char	*s;

	c = 0;
	d = (char *)dst;
	s = (char *)src;
	while (c < n)
	{
		d[c] = s[c];
		c++;
	}
	return (dst);
}
