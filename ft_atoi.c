/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:16:39 by alexlowen         #+#    #+#             */
/*   Updated: 2023/11/06 19:17:00 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str [i] == ' '))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
/*int	main(void)
{
	const char	test1[] = "		4693"; //tiene whitespaces al inicio
	const char	test2[] = "-4693"; //tiene signo - al inicio
	const char	test3[] = "+493"; // tiene signo + al inicio
	const char	test4[] = "+-----4982"; // tiene mas de 2 signos al inicio
	const char	test5[] = "a493"; // tiene letras al inicio
	const char	test6[] = "@493"; //tiene simbolos al inicio
	const char	test7[] = "43-32456"; //tiene simbolos en el medio
	const char	test8[] = "-56 5 2-876";//tiene simbolos en medio
	const char	test9[] = "\7893";//tiene un caracter no imprimible al inicio
	printf("Original: %i\n", atoi(test1));
	printf("Mine: %i\n", ft_atoi(test1));
	printf("Original: %i\n", atoi(test2));
	printf("Mine: %i\n", ft_atoi(test2));
	printf("Original: %i\n", atoi(test3));
	printf("Mine: %i\n", ft_atoi(test3));
	printf("Original: %i\n", atoi(test4));
	printf("Mine: %i\n", ft_atoi(test4));
	printf("Original: %i\n", atoi(test5));
	printf("Mine: %i\n", ft_atoi(test5));
	printf("Original: %i\n", atoi(test6));
	printf("Mine: %i\n", ft_atoi(test6));
	printf("Original: %i\n", atoi(test7));
	printf("Mine: %i\n", ft_atoi(test7));
	printf("Original: %i\n", atoi(test8));
	printf("Mine: %i\n", ft_atoi(test8));
	printf("Original: %i\n", atoi(test9));
	printf("Mine: %i\n", ft_atoi(test9));
	return (0);
}*/