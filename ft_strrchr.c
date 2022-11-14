/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:32:14 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/14 18:44:45 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	i;
	int	j;

	j = -1;
	i = 0;
	if (c == 0)
		return (&str[ft_strlen(str)]);
	while (str[i])
	{
		if (str[i] == c)
			j = i;
		i++;
	}
	if (j != -1)
		return (&str[j]);
	return (NULL);
}
