/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:18:18 by ralanes           #+#    #+#             */
/*   Updated: 2023/11/03 18:24:33 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	if (src == NULL && dst == NULL)
		return (NULL);
	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*int main (void)
{
	char s[] = "hola";
	char d[] = "adios";
	char d2[] = "adios";
	size_t n = 3;

	printf("\n antes de copiar mia %s",d);
	ft_memcpy(d,s,n);
	printf("\n despues de copiar mia %s",d);
	printf("\n antes de copiar original %s",d2);
	memcpy(d2,s,n);
	printf("\n despues de copiar orignal %s",d2);
}*/
