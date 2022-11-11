/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:09:42 by astachni          #+#    #+#             */
/*   Updated: 2022/11/08 14:09:46 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t size)
{
	size_t		i;
	char	*str1;

	i = 0;
	str1 = (unsigned char *)str;
	while (i < size)
	{
		str1[i] = 0;
		i++;
	}
}
