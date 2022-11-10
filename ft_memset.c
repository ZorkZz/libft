/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:11:31 by astachni          #+#    #+#             */
/*   Updated: 2022/11/10 15:41:31 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int c, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		((unsigned char *)pointer) = c;
		i++;
	}
	return (c);
}
