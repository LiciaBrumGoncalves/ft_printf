# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbrum-go <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 02:04:11 by lbrum-go          #+#    #+#              #
#    Updated: 2023/09/22 11:29:21 by lbrum-go         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a

CFLAGS			= -Wall -Wextra -Werror -g -I.
CC				= cc
RM				= /bin/rm -f
FLAGLIB			= -rcs
DIR		= ./libft
LIBFT			= ./libft/libft.a

SRCS		= ft_printf_utils.c ft_printf.c 
SRCS_O			= $(SRCS:.c=.o)

CL := ar -rc



$(NAME): $(LIBFT) $(SRCS_O)
	@cp $(LIBFT) $(NAME)
	@ar $(FLAGLIB) $(NAME) $(SRCS_O)
	${CL} $(NAME)

$(LIBFT): $(DIR)
	@$(MAKE) -C $(DIR)


all: $(NAME)


clean:
	@$(MAKE) clean -C $(DIR)
	@$(RM) $(SRCS_O)

fclean:		clean
			@$(MAKE) fclean -C $(DIR)
			@$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean


