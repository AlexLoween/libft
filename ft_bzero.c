/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:30:54 by ralanes           #+#    #+#             */
/*   Updated: 2023/09/21 15:30:56 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include<string.h>

void    ft_bzero(void *s, unsigned int n)
{
 ft_memset(s, 0, n);
}

/*int main() {
    char myString[] = "Hello, World!";
    size_t len = sizeof(myString) - 1; // Restamos 1 para excluir el carácter nulo '\0'
    
    printf("Antes de bzero: %s\n", myString);
    
    ft_bzero(myString, len);
    
    printf("Después de bzero: %s\n", myString);
    
    return 0;
}*/




