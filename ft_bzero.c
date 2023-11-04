/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:30:54 by ralanes           #+#    #+#             */
/*   Updated: 2023/11/03 17:44:15 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, unsigned int n)
{
	ft_memset(s, 0, n);
}
/*int main()
{
char myString[] = "Hello, World!";
char myString2[] = "Hello, World!";

size_t len = sizeof(myString) - 1;
// Restamos 1 para excluir el carácter nulo '\0'
    
printf("Antes de bzero: %s\n", myString);
ft_bzero(myString, len);
printf("Después de bzero: %s\n", myString);
printf("\nAntes de bzero original: %s\n", myString2);
bzero(myString2, len);
printf("Después de bzero original: %s\n", myString2);
return 0;
}*/
