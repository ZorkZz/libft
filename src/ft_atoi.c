/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:08:58 by astachni          #+#    #+#             */
/*   Updated: 2022/11/08 14:09:03 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	neg;

	neg = 1;
	nb = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || \
		str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '0')
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb * neg);
}
