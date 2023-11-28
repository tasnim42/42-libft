/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:17:12 by tzorai            #+#    #+#             */
/*   Updated: 2023/11/28 18:28:49 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

// int	main()
// {
// 	t_list	*lst = ft_lstnew("Tasnim");

// 	ft_lstadd_front(&lst, ft_lstnew("Coucou "));
// 	ft_lstadd_front(&lst, ft_lstnew("Hello "));

// 	printf("Number of elements (size of the list) : %d\n", ft_lstsize(lst));

// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// }