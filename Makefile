# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/28 12:27:36 by  pedrrodr         #+#    #+#              #
#    Updated: 2025/05/07 16:27:59 by  pedrrodr        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_SERVER = server
NAME_CLIENT = client
NAME_SERVER_BONUS = server_bonus
NAME_CLIENT_BONUS = client_bonus

SRC_SERVER = sources/server.c sources/sources.c
OBJ_SERVER = $(SRC_SERVER:.c=.o)
SRC_CLIENT = sources/client.c sources/sources.c
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)

SRC_SERVER_BONUS = sources/server_bonus.c sources/sources_bonus.c
OBJ_SERVER_BONUS = $(SRC_SERVER_BONUS:.c=.o)
SRC_CLIENT_BONUS = sources/client_bonus.c sources/sources_bonus.c
OBJ_CLIENT_BONUS = $(SRC_CLIENT_BONUS:.c=.o)

LIBFT_DIR = Libft/ft_libft
PRINTF_DIR = Libft/ft_printf
PRINTF_SRC =	$(PRINTF_DIR)/ft_printf.c \
				$(PRINTF_DIR)/ft_numbers.c \
				$(PRINTF_DIR)/ft_putchar.c \
				$(PRINTF_DIR)/ft_putstr.c \
				$(PRINTF_DIR)/ft_putvoid.c \
				$(PRINTF_DIR)/ft_what_format.c
PRINTF_OBJ = $(PRINTF_SRC:.c=.o)
LIBFT = $(LIBFT_DIR)/libft.a
HEADERS = -I Libft/Headers
CC = cc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g $(HEADERS)

all : $(LIBFT) $(NAME_SERVER) $(NAME_CLIENT)

bonus: $(LIBFT) $(NAME_SERVER_BONUS) $(NAME_CLIENT_BONUS)

$(NAME_SERVER):	$(OBJ_SERVER) $(PRINTF_OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ_SERVER) $(PRINTF_OBJ) $(LIBFT) -o $(NAME_SERVER)
	
$(NAME_CLIENT):	$(OBJ_CLIENT) $(PRINTF_OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ_CLIENT) $(PRINTF_OBJ) $(LIBFT) -o $(NAME_CLIENT)

$(NAME_SERVER_BONUS): $(OBJ_SERVER_BONUS) $(PRINTF_OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ_SERVER_BONUS) $(PRINTF_OBJ) $(LIBFT) -o $(NAME_SERVER_BONUS)

$(NAME_CLIENT_BONUS): $(OBJ_CLIENT_BONUS) $(PRINTF_OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ_CLIENT_BONUS) $(PRINTF_OBJ) $(LIBFT) -o $(NAME_CLIENT_BONUS)

$(LIBFT):
	make -C $(LIBFT_DIR)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	make -C $(LIBFT_DIR) clean
	rm -f $(OBJ_SERVER) $(OBJ_CLIENT) $(PRINTF_OBJ) $(OBJ_SERVER_BONUS) $(OBJ_CLIENT_BONUS)
fclean: clean
	make -C $(LIBFT_DIR) fclean
	rm -f $(NAME_SERVER) $(NAME_CLIENT) $(NAME_SERVER_BONUS) $(NAME_CLIENT_BONUS)
re: fclean all