/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:33:11 by ralanes           #+#    #+#             */
/*   Updated: 2023/09/21 15:33:12 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;  				// inicializo i en cero
	while (i < n && (s1[i] || s2[i]))	//mientras i sea menor que el tamño de mi buffer y por s1 de i o sa2 de i exista
	{
		if (s1[i] != s2[i])		//si s1 de i es diferente a s2 de i
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);	// devuelvo la diferencia de la ultima pocision coincidente
		else if (s1[i] == '\0')		// si s1 en la pocicion y es nulo
			return (0);		//devuelvo nulo
		i++;				// aumento el iterdor		
	}
	return (0);				// devuelvo nulo ( en el caso que no se me cumple el while)
}

