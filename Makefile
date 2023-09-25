# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralanes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 22:05:59 by ralanes           #+#    #+#              #
#    Updated: 2023/09/22 22:06:01 by ralanes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC =   ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
		ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c
	
OBJS = $(SRC:.c=.o)
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstsize.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstiter.c ft_lstclear.c \
		ft_lstmap.c 
BONUS_OBJS = $(BONUS:.c=.o)
INCLUDE = libft.h
$(NAME):$(OBJS) $(INCLUDE)
	@ar rsc $(NAME) $(OBJS)
all: $(NAME)
%.o : %.c
	@$(CC) $(CCFLAGS) -c -o $@ $<
clean:
	@rm -f $(OBJS) $(BONUS_OBJS)
fclean:	clean
	@rm -f $(NAME)
re: fclean all
bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)
.PHONY: all clean fclean re bonus







