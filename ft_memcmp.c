/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:31:44 by ralanes           #+#    #+#             */
/*   Updated: 2023/09/21 15:31:45 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	unsigned const char		*str1;
	unsigned const char		*str2;

	i = 0;
	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	while (i < n) 					//mientras i < que el tamaño de mi buffer
	{
		if (*str1 != *str2)			// si primer str es diferente del degundo str
		{
			return ((int)(*str1 - *str2)); // devuelve la diferencia entre los dos strings
		}
		str1++;  				//iterammos para poder segir comprobando
		str2++;
		i++;
	}
	return (0);  					//devuelve cero si las dos cadenas son idénticas 
							//(en caso de no cumplir la condicion del while))
}
