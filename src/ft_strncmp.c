/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:35:48 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/08 15:42:51 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *str1, char *str2, unsigned int size)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] > str2[i])
			return (str1[i]);
		else if (str1[i] < str2[i])
			return (-str2[i]);
		if (str1[i] == 0 && str2[i] == 0)
			return (NULL);
		else if (str1[i] == 0)
			return (-1);
		else if (str2[i] == 0)
			return (1);
		i++;
	}
	return (NULL);
}
