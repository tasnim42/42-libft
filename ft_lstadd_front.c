/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:04:52 by tzorai            #+#    #+#             */
/*   Updated: 2023/11/22 09:36:38 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

int main()
{
    t_list *first = ft_lstnew("First element");
    t_list *second = ft_lstnew("Second element");
    
    // Affichage du contenu avant l'ajout
    printf("Avant l'ajout :\n");
    printf("Premier élément : %s\n", (char *)first->content);
    printf("Deuxième élément : %s\n", (char *)second->content);

    // Ajout du deuxième élément au début de la liste
    ft_lstadd_front(&first, second);

    // Affichage du contenu après l'ajout
    printf("\nAprès l'ajout :\n");
    printf("Nouveau premier élément : %s\n", (char *)first->content);
    printf("Deuxième élément : %s\n", (char *)second->content);

    // N'oubliez pas de libérer la mémoire allouée pour éviter les fuites mémoire
    free(first);
    free(second);

    return 0;
// }