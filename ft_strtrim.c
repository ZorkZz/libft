/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:55:28 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/10 15:43:13 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;

	str = malloc((ft_strlen(s1) - ft_strlen(set) + 1) * sizeof(char));
	setlen = ft_strlen(set);
	if (str == NULL)
		return (NULL);
}
