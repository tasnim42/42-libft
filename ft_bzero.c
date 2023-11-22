/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:21:05 by tzorai            #+#    #+#             */
/*   Updated: 2023/11/11 17:00:55 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = str;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// int main()
// {
// 	char str[] = "Tasnim";

// 	printf("Original string : %s\n", str);
// 	ft_bzero(str, 2);
// 	printf("After bzero : %s", str);
// }