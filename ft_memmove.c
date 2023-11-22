/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:08:42 by tzorai            #+#    #+#             */
/*   Updated: 2023/11/17 10:51:49 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (src == NULL && dest == NULL)
		return (NULL);
	if (s < d)
	{
		while (i < len)
		{
			d[len - i] = s[len - i];
			i++;
		}
		return (dest);
	}
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char src[] = "Hello";
// 	char dest[] = "World";

// 	printf("Source : %s\n", src);
// 	printf("Destination before copy : %s\n", dest);
// 	ft_memmove(dest, src, 3);
// 	printf("Destination after copy : %s\n", dest);

// 	printf("%s\n", memmove(dest, src, 3));
// }