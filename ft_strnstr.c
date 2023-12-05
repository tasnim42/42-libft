/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 07:53:43 by tzorai            #+#    #+#             */
/*   Updated: 2023/12/05 16:28:48 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (tofind[0] == '\0')
		return ((char *)str);
	if (len == 0)
		return (0);
	i = 0;
	while (str[i] && i < len)
	{
		if (str[i] == tofind[0])
		{
			j = 1;
			while (tofind[j] && str[i + j] == tofind[j] && (i + j) < len)
				j++;
			if (tofind[j] == '\0')
			{
				return ((char *)str + i);
			}
		}
		i++;
	}
	return (0);
}
