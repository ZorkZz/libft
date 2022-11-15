/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:55:28 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/15 18:59:57 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strsame(char	*s, const char *set)
{
	int	i;

	i = 0;
	while (s[i] == set[i] && s[i])
	{
		i++;
	}
	if (set[i] == 0)
		return (i);
	return (-1);
}

static int	charlen(char const *s, char const *set)
{
	int	i;
	int	j;
	int	nbset;

	i = 0;
	j = 0;
	nbset = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] == set[j])
		{
			j++;
			i++;
		}
		if (set[j] == '\0')
		{
			i--;
			nbset++;
		}
		i++;
	}
	return (i - (j * nbset));
}

static char	*trim(char const *s, char const *set, char *str, int i)
{
	int	pass;
	int	j;

	i = 0;
	j = 0;
	pass = 0;
	while (s[i])
	{
		if (s[i] == set[0] && pass == 0)
		{
			if (ft_strsame ((char *)&s[i], (char *)set) != -1)
				i += ft_strsame ((char *)&s[i], (char *)set);
			else
				i--;
			pass = 1;
		}
		else
		{
			str[j] = s[i];
			j++;
			pass = 0;
		}
		i++;
	}
	return (str);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*str;
	int		i;
	int		j;

	j = 0;
	i = 0;
	str = malloc((charlen(s, set) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	trim(s, set, str, i);
	str[ft_strlen(str)] = '\0';
	return (str);
}
