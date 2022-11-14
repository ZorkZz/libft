/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:39:49 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/12 17:10:38 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**str;

	i = 0;
	k = 0;
	while (s[i])
	{
		str[k] = malloc((ft_len((char *)&s[i], c) + 1) * sizeof(char));
		if (!str[k])
			return (NULL);
		j = 0;
		while (str[k][j] && s[i] != c)
		{
			str[k][j] = s[i];
			j++;
			i++;
		}
		str[k][j] = 0;
		k++;
		i++;
	}
	return (str);
}
