# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: astachni <astachni@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 15:26:10 by marvin@42.f       #+#    #+#              #
#    Updated: 2023/02/16 15:14:48 by astachni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strjoin.c ft_printf/src/ft_itoa_u.c ft_printf/src/itoa_hex_point.c ft_printf/src/itoa_hex.c ft_printf/src/print_func.c ft_printf/ft_printf.c

SRCS_BONUS = ft_lstadd_back_bonus.c ft_lstlast_bonus.c ft_lstadd_front_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

HEADER = libft.h

%.o: %.c ${HEADER} Makefile
	$(CC) ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
	ar rcs ${NAME} ${OBJS}

all: $(NAME)

bonus: ${OBJS_BONUS} ${OBJS}
	ar rcs ${NAME} ${OBJS} ${OBJS_BONUS}

clean:
	$(RM) $(OBJS) ${OBJS_BONUS}

fclean:	clean
	$(RM) ${NAME}

re: fclean all

.PHONY:	all bonus clean fclean re