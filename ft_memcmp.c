/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:26:04 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/10 19:27:46 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *block1, const void *block2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (*(unsigned char *)(block1 + i) != *(unsigned char *)(block2 + i))
			return (*(unsigned char *)(block1) - *(unsigned char *)(block2));
		i++;
	}
	return (0);
}
