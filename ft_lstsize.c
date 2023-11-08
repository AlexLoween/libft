/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:55:32 by alexlowen         #+#    #+#             */
/*   Updated: 2023/10/30 20:01:11 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst != 0)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}
/*int main(void)
{
    t_list *milista;
    t_list *nodo1;
    t_list *nodo2;
    int contador = 0;
    milista= 0;
    nodo1= ft_lstnew("dog");
    nodo2= ft_lstnew("horse");
    ft_lstadd_front(&milista, nodo1);
    ft_lstadd_front(&milista, nodo2);
    imprimirlista(milista);
    contador=ft_lstsize(milista);
    printf("nodos:%d\n", contador);
}*/
