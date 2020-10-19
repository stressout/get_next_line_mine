# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkeel <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/21 19:06:45 by mkeel             #+#    #+#              #
#    Updated: 2019/05/13 22:04:30 by mkeel            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -c -Wall -Wextra -Werror
HEADER = ./includes
SRC = ft_isalpha.c ft_isdigit.c ft_memchr.c ft_memmove.c ft_memccpy.c ft_memcpy.c \
	  ft_memset.c ft_isascii.c ft_toupper.c ft_tolower.c ft_isprint.c ft_isalnum.c \
	  ft_strlen.c ft_bzero.c ft_memcmp.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
	  ft_strncat.c ft_strchr.c ft_strrchr.c ft_strcmp.c ft_strncmp.c ft_strstr.c ft_strnstr.c \
	  ft_atoi.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_putchar.c \
	  ft_putstr.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr.c \
	  ft_putnbr_fd.c ft_striter.c ft_striteri.c ft_itoa.c ft_strmap.c ft_strmapi.c ft_strnequ.c \
	  ft_strjoin.c ft_strequ.c ft_strsub.c ft_strlcat.c ft_strtrim.c ft_strsplit.c ft_islower.c \
	  ft_isupper.c ft_whitespace.c ft_strndup.c ft_find_word.c


OBJ_NAMES = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) -I $(HEADER)
	ar rc $(NAME) $(OBJ_NAMES)
	ranlib $(NAME)

clean:
	rm -f $(OBJ_NAMES)

fclean: clean
	rm -f $(NAME)

re: fclean all
