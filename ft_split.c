/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:12:32 by ralanes           #+#    #+#             */
/*   Updated: 2023/10/30 19:59:26 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include <stdlib.h>
#include <stdio.h>

int	contador_palabra(const char *str, char delimitador)
{
	int	i;
	int	total_palabra;

	i = 0;
	total_palabra = 1;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == delimitador)
			total_palabra++;
		i++;
	}
	return (total_palabra);
}

char	*ft_poner_palabra(int letra, const char *str, char c)
{
	char	*reserva_palabra;
	int		total_letras;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	total_letras = i + 1;
	reserva_palabra = (char *)malloc(sizeof(char) * total_letras);
	if (!reserva_palabra)
		return (NULL);
	i = 0;
	while (i < total_letras)
	{
		if (str[i] != c)
		{
			reserva_palabra[i] = str[i];
		}
		i++;
	}
	reserva_palabra[i] = '\0';
	return (reserva_palabra);
}

char	**ft_split(const char *str, char c)
{
	int		total_palabras;
	char	**reserva;
	int		palabra;
	int		i;

	palabra = 0;
	i = 0;
	total_palabras = contador_palabra(str, c);
	reserva = (char **)malloc(sizeof(char *) * (total_palabras + 1));
	if (!reserva)
		return (NULL);
	palabra = 0;
	while (palabra < total_palabras)
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			reserva[palabra] = ft_poner_palabra(palabra, &str[i], c);
		while (str[i] && str[i] != c)
			i++;
		palabra++;
	}
	reserva[palabra] = 0;
	return (reserva);
}

/*int main(void)
{
    char **str;
    int i = 0;
    str = ft_split(" hola que tal", ' ');
    while (i < 4)
    {
        printf("%d  %s \n", i, str[i]);
        i++;
    }
    return (0);
}*/
