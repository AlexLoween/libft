/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:18:58 by alexlowen         #+#    #+#             */
/*   Updated: 2023/10/30 20:04:40 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *list)
{
	while (list != 0 && list->next != 0)
		list = list->next;
	return (list);
}
/*int main (void)
{
    t_list *milista;
    t_list *nodo1;
    t_list *nodo2;
    t_list *ultimonodo;
    milista = 0;

    nodo1 = ft_lstnew("cat");
    nodo2 = ft_lstnew("dog");
    ft_lstadd_front(&milista, nodo1);
    ft_lstadd_front(&milista, nodo2);
    imprimirlista(milista);
    ultimonodo = ft_lstlast(milista);
    imprimirlista(ultimonodo);
    
}*/
