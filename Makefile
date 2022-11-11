# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin@42.fr <astachni>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 15:26:10 by marvin@42.f       #+#    #+#              #
#    Updated: 2022/11/10 18:52:44 by marvin@42.f      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_memccpy.c

MANE = main.c

HEADERS = incldues/

OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
	$(CC) -I ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
	ar rcs ${NAME} ${OBJS}

all:
	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	
	$(RM) $(OBJS) ${NAME}

re:	fclean all