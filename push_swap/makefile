# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/26 08:40:06 by bkeskint          #+#    #+#              #
#    Updated: 2021/10/27 19:07:57 by bkeskint         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=		main.c create_stacks.c radix_sort.c short_sort.c \
					pa.c pb.c ra.c rra.c sa.c

OBJ			=		${SRC:.c=.o}

LIBFTSRC 	= 	libft/ft_memset.c libft/ft_bzero.c libft/ft_memcpy.c libft/ft_memccpy.c libft/ft_strlen.c \
				libft/ft_strlcpy.c libft/ft_memmove.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_strlcat.c \
				libft/ft_strchr.c libft/ft_strrchr.c libft/ft_strncmp.c libft/ft_strnstr.c libft/ft_atoi.c \
				libft/ft_isalpha.c libft/ft_isdigit.c libft/ft_isalnum.c libft/ft_isascii.c libft/ft_isprint.c \
				libft/ft_toupper.c libft/ft_tolower.c libft/ft_calloc.c libft/ft_strdup.c libft/ft_substr.c \
				libft/ft_strjoin.c libft/ft_strtrim.c libft/ft_split.c libft/ft_itoa.c libft/ft_strmapi.c \
				libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c \
				libft/ft_exit.c libft/ft_atolong.c

CC			=		gcc
CFLAGS		=		-Wall -Wextra -Werror

NAME		=		push_swap

INCLUDES	=		libft/libft.a

all:		
			@make -C libft/ all
			@$(CC) $(SRC) -o $(NAME) $(CFLAGS) $(INCLUDES)

clean:
			@make -C libft/ clean

fclean: 	clean
			/bin/rm -f $(NAME)
			@make -C libft/ fclean

re: 		fclean all