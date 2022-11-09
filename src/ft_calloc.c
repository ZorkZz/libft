/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:56:15 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/09 13:17:18 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*alloc;
	int		len;

	alloc = malloc(sizeof(elementCount) * (sizeof(elementSize)));
	len = 0;
	while (alloc[len])
	{
		alloc[len] = 0;
		len++;
	}
	return (alloc);
}
