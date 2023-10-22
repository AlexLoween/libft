/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:24:38 by ralanes           #+#    #+#             */
/*   Updated: 2023/10/03 20:56:02 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (s1[i])
	{
		str [i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str [i + j] = s2[j];
		j++;
	}
	str [i + j] = '\0';
	return (str);
}
/*int main()
{
    char const *s1 = "hello";
    char const *s2 = "wo\0\0\0rld";
    
    // Llama a la función ft_strjoin para concatenar las dos cadenas
    char *result = ft_strjoin(s1, s2);

        printf("Concatenated string: %s\n", result);

    return 0;
}*/
