/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:18:56 by ralanes           #+#    #+#             */
/*   Updated: 2023/11/12 17:58:15 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (src == NULL && dst == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d >= s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
		ft_memcpy(d, s, len);
	return (dst);
}
/*int main (void)
{
	char s[] = "holas";
	char d[] = "hello";
	char d2[] = "hello";
	size_t n = 6;

	printf("\n antes de copiar mia %s",d);
	ft_memmove(d,s,n);
	printf("\n despues de copiar mia %s",d);
	printf("\n antes de copiar original %s",d2);
	memmove(d2,s,n);
	printf("\n despues de copiar orignal %s",d2);
}*/