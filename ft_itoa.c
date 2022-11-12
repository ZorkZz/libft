/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:15:28 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/12 20:03:08 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	nbr(int n)
{
	int	i;

	i = 0;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		neg;
	int		len;

	neg = 0;
	if (n < 0)
	{
		n *= -1;
		neg = 1;
	}
	len = nbr(n);
	str = malloc((len + (1 + neg)) * sizeof(char));
	if (!str)
		return (NULL);
	str[len + neg] = 0;
	if (neg == 1)
		str[0] = '-';
	else
		len--;
	while (n >= 10)
	{
		str[len--] = n % 10 + '0';
		n /= 10;
	}
	str[len--] = n + '0';
	return (str);
}
