# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/08 19:09:46 by malsheri          #+#    #+#              #
#    Updated: 2024/03/08 19:54:59 by malsheri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a
SRC 	= ft_strlcpy.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memmove.c \
			ft_memcmp.c ft_memcpy.c ft_memset.c ft_strchr.c ft_strdup.c \
			ft_strlcat.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
			ft_toupper.c ft_substr.c ft_strtrim.c ft_strjoin.c ft_itoa.c ft_strmapi.c \
			ft_striteri.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c
CC 		= cc
CFLAGS  = -Wextra -Wall -Werror
OBJECTS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $@ $^
	
%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJECTS)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 