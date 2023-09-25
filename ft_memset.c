/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:32:14 by ralanes           #+#    #+#             */
/*   Updated: 2023/09/21 15:32:15 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
void    *ft_memset(void *b, int c, unsigned int len)
{
char *p;

p = (char *)b;
while( len > 0)
    {
        p[len -1] = c;
        len --;

    }
return (b);
}
/*int main (void)
{
    char buffer[15];

    ft_memset(buffer, '7', sizeof buffer);
    printf("contenido del buffer \n %s ", buffer);
}*/
/*convertimos un puntero void en un puntero char. 
Luego, utilizo un bucle while para recorrer la memoria, 
estableciendo el valor c en cada posición de memoria. 
El bucle se ejecuta mientras la longitud len sea mayor que 0, 
asegurando que se configuren todos los bytes excepto el 
byte nulo al final de la memoria. Finalmente, la función 
devuelve el puntero original b.*/
