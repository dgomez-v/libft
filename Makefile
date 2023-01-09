# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgomez-v <dgomez-v@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 11:18:04 by dgomez-v          #+#    #+#              #
#    Updated: 2022/10/18 10:50:38 by dgomez-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = -ar -crs

INCLUDES = ./libft.h

SRC = ft_isalpha.c ft_memchr.c ft_putchar_fd.c ft_strchr.c ft_strlcat.c ft_strrchr.c ft_atoi.c ft_isascii.c ft_strlen.c ft_bzero.c ft_isdigit.c ft_memcpy.c ft_putnbr_fd.c ft_strdup.c ft_strmapi.c ft_substr.c ft_memcmp.c ft_strtrim.c ft_calloc.c ft_isprint.c ft_memmove.c ft_putstr_fd.c ft_striteri.c ft_strncmp.c ft_tolower.c ft_putendl_fd.c ft_isalnum.c ft_itoa.c ft_memset.c ft_split.c ft_strjoin.c ft_strnstr.c ft_toupper.c ft_strlcpy.c
SRC_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

RM = rm -f

.PHONY = all bonus clean fclean re


all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $@ $^

.c.o : $(SRC) $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean :
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

bonus: $(OBJ) $(OBJ_BONUS)
	$(AR) $(NAME) $^