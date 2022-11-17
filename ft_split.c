/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:39:49 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/17 23:25:46 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nbstr(char const *s, char c)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			j++;
		i++;
	}
	return (j);
}

static void	ft_free(char **dest, int i)
{
	while (i >= 0)
		free(dest[i--]);
	free(dest);
}

static size_t	nbchar(char const *s, char c, size_t i)
{
	size_t	j;

	j = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		j++;
	}
	return (j);
}

static int	ft_strsplit(char const *s, char **dest, char c)
{
	int	index;
	int	indexdest;
	int	firstchar;

	index = 0;
	firstchar = 0;
	indexdest = 0;
	while (s[index])
	{
		while (s[index] == c && s[index])
			index++;
		firstchar = index;
		while (s[index] != c && s[index])
			index++;
		dest[indexdest] = ft_substr(s, firstchar, index - firstchar);
		if (!dest[indexdest])
		{
			ft_free(dest, indexdest);
			return (-1);
		}
		indexdest++;
	}
	dest[indexdest] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;

	if (!s)
		return (NULL);
	dest = malloc((nbstr(s, c) + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	if (ft_strsplit(s, dest, c) == -1)
		return (NULL);
	return (dest);
}
