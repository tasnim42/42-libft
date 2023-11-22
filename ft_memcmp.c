/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:01:52 by tzorai            #+#    #+#             */
/*   Updated: 2023/11/17 10:31:59 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	const unsigned char	*str1 = (const unsigned char *)s1;
	const unsigned char	*str2 = (const unsigned char *)s2;

	while (len > 0)
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
		len--;
	}
	return (0);
}

// int main()
// {
// 	char s1[] = {'a', 'b', '1', 'h'};
// 	char s2[] = {'a', 'b', '9', 'f'};
// 	size_t len = sizeof s1;
// 	printf("%d\n", ft_memcmp(s1, s2, len));

// 	printf("%d\n", memcmp(s1, s2, len));
// }