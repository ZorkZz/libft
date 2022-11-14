/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:39:49 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/14 18:06:33 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_nb(char const *s, char c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] && s[i + 1] && s[i] == c && s[i + 1] != c)
			j++;
		i++;
	}
	return (j);
}

static int	lenstr(char const *s, char c, int i)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (s[i])
	{
		if (k == 0 && s[i] == c)
		{
			k++;
			j++;
		}
		if (s[i] == c)
			return (k - j);
		i++;
		k++;
	}
	return (k - j);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		nbstr;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	nbstr = c_nb(s, c);
	strs = malloc(nbstr + 1 * sizeof(char));
	while (s[i])
	{
		strs[j] = malloc(lenstr(s, c, i));
		while (s[i] != c && s[i + 1] != c)
		{
			strs[j][k] = s[i];
			j++;
			i++;
		}
		while (s[i] == c)
			i++;
		k++;
	}
	return (strs);
}
