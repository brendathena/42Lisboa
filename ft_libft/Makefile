# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsantann <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 23:22:27 by bsantann          #+#    #+#              #
#    Updated: 2021/12/07 22:09:01 by bsantann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
# FILES #
SRCS = ft_strlen.c \
			ft_atoi.c\
			ft_bzero.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_strchr.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c\
			ft_itoa.c\
			ft_strmapi.c\
			ft_striteri.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c


OBJ = $(SRCS:.c=.o)

BONUS_SRCS = ft_lstnew.c\
			 ft_lstadd_front.c\
			 ft_lstsize.c\
			 ft_lstlast.c\
			 ft_lstadd_back.c\
			 ft_lstdelone.c\
			 ft_lstclear.c\
			 ft_lstiter.c\
			 ft_lstmap.c

BONUS_OBJ = $(BONUS_SRCS:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror -I.

all:	$(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)
	@echo "Bleh ta feito... eu acho"

bonus: $(OBJ) $(BONUS_OBJ)
	@ar rc $(NAME) $(OBJ) $(BONUS_OBJ)

clean:	
	@rm -f $(OBJ) 
	@rm -f $(BONUS_OBJ)
	@echo "Ta limpo"
fclean: clean
	@rm -f $(NAME)
	@echo "Ta... mais limpo?"

re: fclean all

.PHONY: all, clean, fclean, re
