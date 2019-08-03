# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crice <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/03 15:28:14 by crice             #+#    #+#              #
#    Updated: 2019/08/03 15:28:15 by crice            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

SRC_D = $(addprefix ./srcs/, $(SRCS))
OBJ_D = objs
INC = -I ./libft -I ./includes -I ./minilibx_macos
LIB = -L./libft/ -lft 
MLX = -L./minilibx_macos -lmlx -framework OpenGL -framework AppKit

GCCFLAGS = -Wall -Wextra -Werror
SRCS = main.c \
	   julia.c \
	   image.c \
	   tricorn.c \
	   sierpinski.c \
	   burningship.c \
       mandelbrot.c \
	   barnsley.c \
	   sunflower.c \
	   hook.c \
	   aditional.c \


OBJS = $(addprefix $(OBJ_D)/,$(SRCS:.c=.o))

all: $(NAME)

$(NAME):
	  		make -C ./libft
			make -C ./minilibx_macos
			gcc $(GCCFLAGS) -c $(SRC_D) $(INC)
			mkdir -p $(OBJ_D) && mv $(SRCS:.c=.o) ./$(OBJ_D)/
			gcc $(GCCFLAGS) -o $(NAME) $(OBJS) $(LIB) $(MLX) $(INC)

clean:
			make clean -C ./libft
			make clean -C ./minilibx_macos
			rm -rf $(OBJ_D)

fclean: clean
			make fclean -C ./libft
			make clean -C ./minilibx_macos
			rm -rf $(NAME)

re: fclean all
