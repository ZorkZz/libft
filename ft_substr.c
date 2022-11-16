/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:57:56 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/15 18:38:35 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dest;

	i = 0;
	j = start;
	dest = malloc((sizeof(char *) * (len + 1)));
	if (dest == NULL)
	{
		return (NULL);
	}
	if (ft_strlen((char *)s) >= (size_t)start)
	{
		while (i != len)
		{
			dest[i] = s[i + j];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
