/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:14:41 by tzorai            #+#    #+#             */
/*   Updated: 2023/11/17 10:49:40 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_size(int n)
{
	size_t	i;

	if (n <= 0)
		i = 1;
	else
		i = 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;

	i = num_size(n);
	str = (char *)malloc(i + 1);
	if (!str)
		return (0);
	str[i] = '\0';
	i--;
	if (n == 0)
		str[i] = '0';
	else if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (str);
}

// int main()
// {
// 	int	nbr = 123456;
// 	printf("%s\n", ft_itoa(nbr));
// }