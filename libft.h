/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:13:46 by astachni          #+#    #+#             */
/*   Updated: 2022/11/08 14:13:48 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define  LIBFT_H

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);

int	ft_strlen(char *str);

void	*ft_memset(void *pointer, int c, int size);
void	ft_bzero(void *str, int size);
void	*ft_memcpy(void *dest, const void * src, int n);
void	*ft_memmove(void *str1, const void *str2, int n);

int	ft_atoi(char *str);
void	ft_strlcpy(char *dest, char *src, int size);
#endif