/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:20:01 by ralanes           #+#    #+#             */
/*   Updated: 2023/09/21 15:20:03 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)  //Copia la cadena a la que apunta src al búfer señalado por dst
{
	size_t	i;
	size_t	len;  //creo una variable para guardar la longitud de src

	len = ft_strlen(src);  //guardo el la variable len la longitud de mi string de origen
	if (dstsize < 1) //si el tamaño de mi buffer es menor que 1
		return (len); //devuelvo la longitud de mi origen
	i = 0;  //inicializo mi variable en cero
	while (src[i] != '\0' && i < (dstsize - 1)) //mientras mi origen en la posicion i sea distinto a caracter nulo. Y mi contador sea menor que mi buffer menos 1 PARA EL CHAR NULO.
	{
		dst[i] = src[i];  //copio mi origen en el destino
		i++; //y voy avanzando para recorer el src
	}
		dst[i] = '\0'; //por ultimo cierro con caracter nulo mi destino
	return (len); //devuelvo la longitud total de la cadena a crear (longitud de src)
}