/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:24:15 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/20 01:46:56 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i;
	size_t		j;
	char		*c;

	c = (char *)s1;
	i = 0;
	if ((!s1 && len == 0) || (!s2 && len == 0))
		return (0);
	while (s1[i])
	{
		j = 0;
		while (s1[i] == s2[j] && i < len)
		{
			i++;
			j++;
		}
		if (s2[j] == '\0')
			return ((char *)&s1[i - j]);
		i++;
	}
	return (NULL);
}
