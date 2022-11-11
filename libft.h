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

#ifndef LIBFT_H

# define  LIBFT_H

# include <stddef.h>
# include <stdlib.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

int		ft_strlen(char *str);

void	*ft_memset(void *pointer, int c, size_t size);
void	ft_bzero(void *str, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memccpy(void *dest, const void *src, int c, size_t size)
void	*ft_memmove(void *str1, const void *str2, size_t n);
void	*ft_memchr(const void *str, int c, size_t size);
int		ft_memcmp(const void *block1, const void *block2, size_t size);

int		ft_atoi(char *str);
void	ft_strlcpy(char *dest, char *src, int size);
void	ft_strlcat(char *dest, char *src, size_t size);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strchr(char *str, int c);
char	*ft_strrchr(char *str, int c);
int		ft_strncmp(char *str1, char *str2, unsigned int size);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
void	*ft_calloc(size_t elementCount, size_t elementSize);
char	*ft_strdup(const char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
#endif