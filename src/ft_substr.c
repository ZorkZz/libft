/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:57:56 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/09 14:11:24 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = start;
	dest = malloc((sizeof(char *) * i) + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	while (i != len)
	{
		det[i] = s[i + j];
		i++;
	}
	return (dest);
}
