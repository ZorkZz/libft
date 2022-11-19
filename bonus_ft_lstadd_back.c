/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_ft_lstadd_back.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:41:31 by astachni          #+#    #+#             */
/*   Updated: 2022/11/19 18:47:59 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_listadd_back(t_list **lst, t_list *new)
{
	t_list	*elm;

	elm = malloc(sizeof(*new));
	elm = new;
	if (!lst)
		return (NULL);
}
