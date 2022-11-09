/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:10:28 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/09 16:31:33 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (((int)memoryBlock[i]) == searchedChar)
		{
			return (*memoryBlock[i]);
		}
		i++;
	}
	return (NULL);
}
