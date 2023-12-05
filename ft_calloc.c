/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:23:34 by tzorai            #+#    #+#             */
/*   Updated: 2023/12/05 16:26:57 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nb_elements, size_t size_element)
{
	void	*allocated_memory;
	size_t	total_size;

	total_size = nb_elements * size_element;
	if (size_element && (nb_elements > (UINT32_MAX / size_element)))
		return (NULL);
	allocated_memory = malloc(total_size);
	if (allocated_memory == NULL)
		return (NULL);
	ft_bzero(allocated_memory, total_size);
	return (allocated_memory);
}
