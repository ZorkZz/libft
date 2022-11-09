/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:24:15 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/09 12:49:43 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < len)
	{
		if (s1[i] == s2[i])
		{
			j = 0;
			k = i;
			while (s1[i] == s2[j])
			{
				i++;
				j++;
			}
			if (s2[j] == 0)
				return (s1[i]);
			i = k;
		}
		i++;
	}
	return (NULL);
}
