/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:24:22 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/10 17:35:10 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;
	int		len;

	len = ft_strlen(len);
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	dest = ft_memcpy(dest, src, len);
	return (dest);
}
