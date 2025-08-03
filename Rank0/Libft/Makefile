# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbongiov <pbongiov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/10 19:19:37 by pbongiov          #+#    #+#              #
#    Updated: 2025/04/27 19:34:34 by pbongiov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f

SRCS_FILES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			 ft_memset.c ft_strlen.c ft_tolower.c ft_toupper.c ft_bzero.c\
			 ft_memcpy.c  ft_strlcpy.c ft_strlcat.c ft_strchr.c\
			 ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
			 ft_atoi.c ft_strdup.c ft_calloc.c ft_memmove.c ft_substr.c ft_strjoin.c\
			 ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
			 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

OBJS = $(SRCS_FILES:.c=.o)

BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
			 ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c\
			 ft_lstmap_bonus.c\

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) -rf bonus

re: fclean all

.PHONY: all clean fclean re 

bonus: $(BONUS_OBJS) $(NAME)
	$(AR) $(NAME) $(BONUS_OBJS)
	touch bonus