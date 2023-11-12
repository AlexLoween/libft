/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:32:14 by ralanes           #+#    #+#             */
/*   Updated: 2023/11/12 18:04:43 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = ptr;
	while (i < n)
	{
		s[i] = (unsigned char)x;
		i++;
	}
	return (ptr);
}
/*int main (void)
{
    char buffer[5];

    ft_memset(buffer, 'x', sizeof buffer); 
    printf("contenido del buffer mio \n%s", buffer);
    memset(buffer, 'x', sizeof buffer); 
    printf("\ncontenido del buffer original\n%s", buffer);
}*/
/*convertimos un puntero void en un puntero char. 
asegurando que se configuren todos los bytes excepto el 
byte nulo al final de la memoria. Finalmente, la función 
devuelve el puntero original ptr.*/
