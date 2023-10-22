/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:53:22 by ralanes           #+#    #+#             */
/*   Updated: 2023/10/22 17:23:56 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*nuevo_str;

	i = start;
	if (start > ft_strlen(s))
	{
		start = 0;
	}
	if (len > ft_strlen(s))
	{
		len = 0;
	}
	nuevo_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!nuevo_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		nuevo_str[i] = s[i + start];
		i++;
	}
	nuevo_str[i] = '\0';
	return (nuevo_str);
}

/* int main() {
    const char *cadena_original = "Ejem";
    unsigned int inicio = 1; // Índice de inicio
    size_t longitud =10 ;    // Longitud de la subcadena

    // Llamada a la función ft_substr
    char *subcadena = ft_substr(cadena_original, inicio, longitud);

    if (subcadena) {
        printf("Subcadena: %s\n", subcadena);
        free(subcadena); // Liberar la memoria asignada por ft_substr
    } else {
        printf("Índice o longitud fuera de rango o error de memoria.\n");
    }

    return 0;
}*/