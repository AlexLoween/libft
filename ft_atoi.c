/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <ralanes@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:17:35 by hena              #+#    #+#             */
/*   Updated: 2023/08/21 13:57:07 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
int ft_atoi (const char *str)
{   
    int i;
    int cnt;
    int sig;
    i = 0;
    cnt = 0;
    sig = 1;
    while((str[i] >= 9 && str[i] <= 13) || (str [i] == ' '))
        i++;
    if (str[i] == '+' || str[i] == '-')
    if(str[i]== '-')
        sig = -1;
    i++;
    while(str[i] >= '0' && str[i]<= '9')
    {
        cnt = cnt * 10 + str[i] - '0';
        i++; 
    }
return cnt * sig;
}
/*int main(void)
{
	char str[10]= " 1234";
	int numero;

	numero = ft_atoi(str);

    printf(("%d el numero es\n"), numero);
}*/