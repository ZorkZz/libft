/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:24:15 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/09 17:18:04 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int		i;
	int		j;
	int		k;
	char	*c;

	c = (char *)s1;
	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2[0])
		{
			j = 0;
			k = i;
			while (s1[i] == s2[j] && j <= len)
			{
				i++;
				j++;
			}
			if (s2[j] == 0)
				return (&c[i - j]);
			i = k;
		}
		i++;
	}
	return (NULL);
}
