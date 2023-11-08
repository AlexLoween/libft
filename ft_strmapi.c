/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:12:19 by ralanes           #+#    #+#             */
/*   Updated: 2023/11/06 13:20:45 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*int main() {
    const char *input_string = "Hey que tal?!";
    char *result = ft_strmapi(input_string, 'C');

    if (result != NULL) {
        printf("Cadena original: %s\n", input_string);
        printf("Cadena convertida: %s\n", result);
    } else {
        printf("No se pudo realizar la conversión.\n");
    }
    return 0;
}*/