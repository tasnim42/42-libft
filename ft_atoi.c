/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:09:50 by tzorai            #+#    #+#             */
/*   Updated: 2023/12/05 16:26:44 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	overflow(int sign, unsigned long long nb)
{
	if (sign == -1 && nb >= __LONG_LONG_MAX__ + 1ULL)
		return (0);
	if (sign == 1 && nb >= __LONG_LONG_MAX__)
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	unsigned long long	number;
	size_t				i;
	int					sign;

	number = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		if (overflow(sign, number) != 1)
			return (overflow(sign, number));
		number = number * 10 + str[i] - '0';
		i++;
	}
	if (overflow(sign, number) != 1)
		return (overflow(sign, number));
	return (sign * number);
}
