/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:24:22 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/14 21:31:47 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char			*dest;
	int				i;
	const size_t	len = ft_strlen((char *)src);

	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	dest = ft_memcpy(dest, src, (size_t)len);
	dest[ft_strlen(dest)] = '\0';
	return (dest);
}
