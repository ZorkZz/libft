/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:56:15 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/09 15:42:44 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alloc;
	int		len;

	alloc = malloc((ft_strlen(count) * (ft_strlen(size)) * sizeof(void)));
	len = 0;
	if (alloc == NULL)
	{
		return (NULL);
	}
	while (alloc[len])
	{
		alloc[len] = 0;
		len++;
	}
	return (alloc);
}
