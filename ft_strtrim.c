/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:38:49 by ralanes           #+#    #+#             */
/*   Updated: 2023/10/22 21:25:38 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	in;
	size_t	fn;

	if (!s1 && !set)
		return (NULL);
	fn = 0;
	in = ft_strlen(s1);
	while (s1[in] && ft_strchr(set, *s1))
		in++;
	while (s1[fn -1] && ft_strchr(set, s1[fn -1] && in > fn))
		fn--;
	str = (char *)malloc(sizeof(char) * ((fn - in) + 1));
	if (str)
		ft_strlcpy(str, &s1[in], (fn - in) + 1);
	return (str);
}
/*int main() {
    const char *input = "   Hello, World!   ";
    const char *set = " \t\n";

    char *trimmed = ft_strtrim(input, set);
        printf("Trimmed: \"%s\"\n", trimmed);
    return 0;
}*/
