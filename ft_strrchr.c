/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:32:14 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/14 18:44:45 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	lenstr;

	lenstr = ft_strlen(str);
	if (c == 0)
		return ((char *)&str[ft_strlen(str)]);
	while ((int)lenstr >= 0)
	{
		if (str[lenstr] == c)
			return ((char *)&str[lenstr]);
		lenstr--;
	}
	return (NULL);
}
