/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:33:43 by ralanes           #+#    #+#             */
/*   Updated: 2023/09/21 15:33:45 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;

	a = c; 					//se iguala la variable al valor de sus parametro de entrada
	i = ft_strlen(s); 			//guardo en la variable i la longitud de la string s
	if (a == 0) 				// si el caracter a buscar no existe
		return ((char *) &s[i]);  	//devuelve ls direccion de ls dtring de i casteada como char puntero
	while (i >= 0) 				// mientras la longidut de string sea mayor o igual a cero
	{
		if (s[i] == a) 			 // y si la string de i en este momento es igual al caracter que estoy buscando
			return ((char *)&s[i]); // devuelvo la direccion en memoria del puntero de la coincidencia del caracter buscado casteado a char
		i--; 				// disminuio mi iterador para recorrer mi string desde el final hacia el princoipioi
	}
return (0); 				// en caso contrario, devuelvo cero
}
