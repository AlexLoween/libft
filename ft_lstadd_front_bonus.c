/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:47:28 by alexlowen         #+#    #+#             */
/*   Updated: 2023/10/22 21:12:56 by alexlowen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if(*lst == 0)
    {
        new->next = 0;
        *lst= new;
    }
    else
        new->next = *lst;
        *lst = new;
}
/*void imprimirlista(t_list *lista)
{
    while(lista != 0)
    {
        printf("%s\n", lista->content);
    lista= lista->next;
    }
    printf("NULL\n");
}*/
/*int main (void)
{
    t_list *mi_lista = 0;
    t_list *nuevo_nodo;
    t_list *move_nodo;

    nuevo_nodo = ft_lstnew("cat");
    move_nodo = ft_lstnew("dog");
    ft_lstadd_front(&mi_lista, nuevo_nodo );
    printf("lista creada, añadido primer nodo al frente\n");
    imprimirlista(mi_lista);

    printf("lista modificada, añadido segundo nodo al frente\n");
    ft_lstadd_front(&mi_lista, move_nodo );
    imprimirlista(mi_lista);
return (0);
}*/