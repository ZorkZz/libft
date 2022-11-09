/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:35:48 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/09 16:57:21 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(char *str1, char *str2, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (str1[i] > str2[i])
			return (str1[i]);
		else if (str1[i] < str2[i])
			return (-str2[i]);
		if (str1[i] == 0 && str2[i] == 0)
			return (0);
		else if (str1[i] == 0)
			return (-1);
		else if (str2[i] == 0)
			return (1);
		i++;
	}
	return (0);
}
