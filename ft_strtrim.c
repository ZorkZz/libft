/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:55:28 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/12 17:12:53 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strsame(char	*s, const char *set)
{
	int	i;

	i = 0;
	while (s[i] == set[i] && s[i])
	{
		if (set[i] == 0)
			return (i);
	}
	return (-1);
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*str;
	int		i;
	int		j;

	j = 0;
	i = 0;
	str = malloc((ft_len((char *)s) - ft_len((char *)set) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == set[0])
		{
			if (ft_strsame ((char *)&s[i], (char *)set) != -1)
				i += ft_strsame ((char *)&s[i], (char *)set);
		}
		else
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	return (str);
}
