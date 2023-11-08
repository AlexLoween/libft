/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:20:01 by ralanes           #+#    #+#             */
/*   Updated: 2023/11/06 12:11:22 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		size;

	size = ft_strlen(s1);
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, size);
	ptr[size] = '\0';
	return (ptr);
}
/*int main() {
    const char *original_str = "hey";
    const char *original_str2 = "hey";
    char *dupl_str = ft_strdup(original_str);
    char *dupl_str2 = strdup(original_str2);
    if (dupl_str != NULL) {
        printf("mio Original: %s\n", original_str);
        printf("mio Duplicado: %s\n", dupl_str);
        printf("Original: %s\n", original_str2);
        printf("Duplicado: %s\n", dupl_str2);
    } else {
        printf("Error al duplicar la cadena.\n");
    }
    return 0;
}*/