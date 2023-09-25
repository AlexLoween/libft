/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:32:23 by ralanes           #+#    #+#             */
/*   Updated: 2023/09/21 15:32:26 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include<stdio.h>
char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = c; //se iguala la variable al valor de sus parametro de entrada
	while (*s) //mientras el puntero a la cadena exista
	{
		if (*s == a) //mientras el puntero a la cadena a buscar sea igual a caracter a buscar
		{
			return ((char *) s); // devuelvo un char puntero a la coincidencia.
		}
		s++; //contador para poder recorer el string
	}
	if (a == '\0') //mietntras el caracter sea igual a NULL
		return ((char *) s); // devuelvo un char puntero a la coincidencia
	return (0);
}
/*int main(void)
{
	char str[] = "Hola mundo";
	char find = 'o';
	char *result;
	result = ft_strchr(str, find);

	if( result != NULL){
		printf("letra buscada%c posicion %ld", find, result - str);}
	else{
		printf("no se ha encontrado coincidencia %c",find );}
return(0);
}*/