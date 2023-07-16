# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kortolan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 17:14:10 by kortolan          #+#    #+#              #
#    Updated: 2023/04/29 17:17:16 by kortolan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libftprintf.a
SRCS		= ft_printf.c ft_format.c ft_format_p.c ft_unsigned.c ft_hex.c
OBJS = ${SRCS:.c=.o}
CC		= cc
RM		= rm -f
CFLAGS = -Wall -Wextra -Werror
.c.o:
		${CC} ${CFLAGS} -g -I includes/ -c $< -o ${<:.c=.o}


$(NAME): ${OBJS}
		make  -C libft
		cp libft/libft.a ./${NAME}
		ar rcs ${NAME} ${OBJS}


all:	${NAME}


clean:
		${RM} ${OBJS}
		make clean -C libft

fclean:	clean
		${RM} ${NAME}
		make fclean -C libft

re:		fclean all
