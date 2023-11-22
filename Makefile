# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/11 16:05:20 by tzorai            #+#    #+#              #
#    Updated: 2023/11/21 16:02:46 by tzorai           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -wextra -Werror

NAME = libft.a

SOURCES = ft_atoi.c\
		  ft_bzero.c\
		  ft_calloc.c\
		  ft_isalnum.c\
		  ft_isalpha.c\
		  ft_isascii.c\
		  ft_isdigit.c\
		  ft_isprint.c\
		  ft_itoa.c\
		  ft_memchr.c\
		  ft_memcmp.c\
		  ft_memcpy.c\
		  ft_memmove.c\
		  ft_memset.c\
		  ft_putchar_fd.c\
		  ft_putendl_fd.c\
		  ft_putnbr_fd.c\
		  ft_putstr_fd.c\
		  ft_split.c\
		  ft_strchr.c\
		  ft_strdup.c\
		  ft_striteri.c\
		  ft_strjoin.c\
		  ft_strlcat.c\
		  ft_strlcpy.c\
		  ft_strlen.c\
		  ft_strmapi.c\
		  ft_strncmp.c\
		  ft_strnstr.c\
		  ft_strrchr.c\
		  ft_strtrim.c\
		  ft_substr.c\
		  ft_tolower.c\
		  ft_toupper.c\

BONUS_SOURCES = ft_lstnew.c\
				ft_lstadd_front.c\
				ft_lstsize.c\
				ft_lstlast.c\
				ft_lstadd_back.c\
				ft_lstdelone.c\
				ft_lstclear.c\
				ft_lstiter.c\
				ft_lstmap.c\

HEADERS = libft.h

OBJECTS = $(SOURCES:.c=.o)
BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)


$(NAME): $(OBJET)
	@ar rc $(NAME) $(OBJECT)

bonus: $(BONUS_OBJECT)
	@ar rc $(NAME) $(BONUS_OBJECT)

%.o: %.c
	$(CC) $(FLAGS) -I. -c $< -o $@

all: $(NAME)

clean:
	@rm -rf $(OBJECT) $(BONUS_OBJECT)

fclean: clean
	@rm -fr $(NAME)

re: fclean all

.PHONY: clean fclean all re bonus