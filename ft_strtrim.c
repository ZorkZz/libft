/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:55:28 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/19 20:23:37 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_ass(char const s, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

static size_t	nb_trim_start(char const *s, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	nbchar;

	nbchar = 0;
	i = 0;
	while (s[i] && my_ass(s[i++], set))
	{
		nbchar++;
	}
	return (nbchar);
}

static size_t	nb_trim_stop(char const *s, char const *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s);
	i--;
	while (s[i] && my_ass(s[i], set) && (int)i > 0)
	{
		i--;
	}
	i++;
	return (i);
}

static char	*cpy(char const *s, size_t start, size_t stop)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc((stop - start + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (start <= stop)
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*dest;
	size_t	nbstart;
	size_t	nbstop;

	if (s == NULL)
		return (NULL);
	nbstart = nb_trimstart(s, set);
	nbstop = nb_trimstop(s, set);
	return (ft_substr(s, nbstart, nbstop - nbstart));
}
