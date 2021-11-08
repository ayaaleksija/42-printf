# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agondard <agondard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 14:26:40 by agondard          #+#    #+#              #
#    Updated: 2021/11/08 16:20:28 by agondard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rc
RM = rm -rf

SRC = 	ft_print_char.c	\
		ft_print_di.c	\
		ft_print_p.c	\
		ft_print_s.c	\
		ft_print_u.c	\
		ft_print_x.c	\
		ft_printf_tools.c	\
		ft_printf.c	\
		ft_putnbr_tools.c	\

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
