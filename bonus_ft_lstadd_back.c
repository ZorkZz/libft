/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_ft_lstadd_back.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stachni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:41:31 by stachni           #+#    #+#             */
/*   Updated: 2022/11/18 20:41:31 by stachni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_listadd_back(t_list **lst, t_list *new)
{
	t_list	*elm;

	elm = malloc(sizeof(*new));
	elm = new;
	if(!lst)
		return (NULL);
}
