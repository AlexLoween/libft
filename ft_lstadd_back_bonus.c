/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexlowen <alexlowen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:40:40 by alexlowen         #+#    #+#             */
/*   Updated: 2023/10/30 20:13:21 by ralanes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	last_node = ft_lstlast(*lst);
	if (last_node != 0)
		last_node->next = new;
	else
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
    ft_lstadd_back(&mi_lista, nuevo_nodo );
    printf("lista creada, añadido primer nodo al final\n");
    imprimirlista(mi_lista);

    printf("lista modificada, añadido segundo nodo al final\n");
    ft_lstadd_back(&mi_lista, move_nodo );
    imprimirlista(mi_lista);
return (0);
}*/
