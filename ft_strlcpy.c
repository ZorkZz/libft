/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:30:31 by astachni          #+#    #+#             */
/*   Updated: 2022/11/10 15:42:05 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strlcpy(char *dest, char *src, int size)
{
	int	i;

	i = 0;
	while (i <= size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}
