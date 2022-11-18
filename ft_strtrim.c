/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zorkz <zorkz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:55:28 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/18 19:59:17 by zorkz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_stop(char const *s, char const *set)
{
	size_t	slen;
	size_t	i;
	size_t	j;
	size_t	stop;
	size_t	exit;

	i = 0;
	exit = 0;
	stop = 0;
	slen = ft_strlen(s);
	while ((int)slen >= 0)
	{
		j = 0;
		while (set[i])
		{
			if (s[i] == set[j] && exit + 1 < ft_strlen(set))
				stop++;
			while (s[i] != set[j++])
				exit++;
		}
	}
	return (stop);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*dest;
	size_t	start;
	size_t	i;
	size_t	j;
	size_t	exit;

	exit = 0;
	i = 0;
	start = 0;
	while (s[i])
	{
		j = 0;
		while (set[j])
		{
			if (s[i] == set[j] && exit + 1 < ft_strlen(set))
			{
				exit = 0;
				start++;
			}
			if (s[i] != set[j])
			{
				exit++;
				if (j == ft_strlen(set))
					j = 0;
			}
			j++;
		}
		i++;
	}
	dest = ft_substr(s, start, start - ft_stop(s, set));
	return (dest);
}
