/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:55:28 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/15 20:27:09 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[1])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	stop;

	start = 0;
	stop = ft_strlen(s);
	while (s[start] && ft_char_set(s[start], set))
		start ++;
	while (stop > start && ft_char_set(s[stop - 1], set))
		stop--;
	str = malloc(sizeof(char) * (ft_strlen(s)) * (stop - start + 1));
	if (!str)
		return (NULL);
	while (start < stop)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
