/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:21:05 by tzorai            #+#    #+#             */
/*   Updated: 2023/11/20 16:34:38 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}


int main()
{
    // Création de quelques éléments de liste pour l'exemple
    t_list *element1 = ft_lstnew("Element 1");
    t_list *element2 = ft_lstnew("Element 2");
    t_list *element3 = ft_lstnew("Element 3");

    // Initialisation d'une liste chaînée
    t_list *myList = element1;
    element1->next = element2;
    element2->next = element3;

    // Appel de la fonction ft_lstlast
    t_list *lastElement = ft_lstlast(myList);

    // Affichage du contenu du dernier élément
    if (lastElement != NULL)
        printf("Contenu du dernier élément : %s\n", (char *)lastElement->content);
    else
        printf("La liste est vide.\n");

    // Libération de la mémoire (assurez-vous d'avoir une fonction pour libérer la liste)
    ft_lstclear(&myList, free);

    return 0;
}