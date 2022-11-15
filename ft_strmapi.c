/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:44:25 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/15 19:53:20 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*str;
	unsigned int		i;

	i = 0;
	str = malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
/*
char	ft_toup(unsigned int MNHJ, char c)
{
	(void)MNHJ;
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

#include <stdio.h>

 int	main(void)
 {
	printf("%s\n", ft_strmapi("ifgdisuf", &ft_toup));
 }*/


// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>

// void    ft_print_result(char const *s)
// {
//         int             len;

//         len = 0;
//         while (s[len])
//                 len++;
//         write(1, s, len);
// }

// char    mapi(unsigned int i, char c)
// {
//         static int indexArray[11] = {0};

//         if (i > 10 || indexArray[i] == 1)
//                 write(1, "wrong index\n", 12);
//         else
//                 indexArray[i] = 1;
//         if (c >= 'a' && c <= 'z')
//                 return (c - 32);
//         else if (c >= 'A' && c <= 'Z')
//                 return (c + 32);
//         else
//                 return (c);
// }

// int             main(int argc, const char *argv[])
// {
//         char    *str;
//         char    *strmapi;

// 		ft_print_result("MES COUILLES SUR TON PROGRAMME\n");
//         alarm(5);
//         str = (char *)malloc(sizeof(*str) * 12);
//         if (argc == 1 || !str)
//                 return (0);
//         else if (atoi(argv[1]) == 1)
//         {
//                 strcpy(str, "LoReM iPsUm");
//                 strmapi = ft_strmapi(str, &mapi);
//                 ft_print_result(strmapi);
//                 if (strmapi == str)
//                         ft_print_result("\nA new string was not returned");
//                 if (strmapi[11] != '\0')
//                         ft_print_result("\nString is not null terminated");
//         }
//         return (0);
// }