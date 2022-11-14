/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:35:48 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/14 20:51:04 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *str1, char *str2, size_t size)
{
	if (size > ft_strlen(str1))
		size = ft_strlen(str1) + 1;
	if (size > ft_strlen(str2))
		size = ft_strlen(str2) + 1;
	return (ft_memcmp(str1, str2, size));
}
