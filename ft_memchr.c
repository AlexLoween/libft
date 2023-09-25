/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:31:19 by ralanes           #+#    #+#             */
/*   Updated: 2023/09/21 15:31:20 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
void	*ft_memchr(const void *s, int c, size_t n) //Se recibe una cadena, un carácter para encontrar y el tamaño del buffer
{
	size_t			i;
	unsigned char	*str;
	unsigned char	to_find;

	i = 0;
	str = (unsigned char *)s;
	to_find = (unsigned char)c;
	while (i < n) 				//mientas i menor que el tamaño del buffer. 
	{
		if (str[i] == to_find) 		//si recorriendo str[i] encuentro la coincidencia que busco
			return (&str[i]); 	//devuelvo la dirrecion de la posicion de la coincidencia 
		i++; 				//contador para poder recorrer el str hasta que se encuentre la coincidencia que busco
	}
	return (0); 				//si no hay una coincidencia devuelve NULL
}

int main (void)
{
	


}