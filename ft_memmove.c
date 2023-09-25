/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:18:56 by ralanes           #+#    #+#             */
/*   Updated: 2023/09/21 15:18:59 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<string.h>

void	*ft_memmove(void *dst, const void *src, size_t len) //Mueva n bytes (len) del área de memoria src al área de memoria dst cuando dst es mayor que src.
{
	unsigned char	*d;
	unsigned char	*s;

	if (src == NULL && dst == NULL)
		return (NULL);
	d = (unsigned char *)dst; // igualo mis punteros al valor de sus parametros
	s = (unsigned char *)src; 
	if (d >= s) // //si s(source)  es mayor o igual que la pos de mi d(dest)
	{
		while (len--) //el tamaño de mi buffer sea distinto de cero
			d[len] = s[len]; // voy copiando cada elemento a la inversa para evitar overlaping.
	}
	else //si no
		ft_memcpy(d, s, len); // copio todos mis caracteres secuencialmente con memcpy
	return (dst); //retorno dest.
}
