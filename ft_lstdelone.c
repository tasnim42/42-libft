/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:28:24 by tzorai            #+#    #+#             */
/*   Updated: 2023/11/28 18:32:24 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

int main()
{
	t_list *element = ft_lstnew(ft_strdup("Test Element"));

	printf("Contenu avant la suppression : %s\n", (char *)element->content);

	ft_lstdelone(element, free);

	printf("Contenu après la suppression : %p\n", (void *)element);
}