##
## EPITECH PROJECT, 2018
## matchstick
## File description:
## Compile the program
##

NAME = 		matchstick

CC =		gcc

SRC = 		src/main.c		\
		src/map/display_map.c	\
		src/map/generate_map.c	\
		src/map/free_map.c	\
		src/map/matches.c	\
		src/game/matchstick.c	\
		src/game/player.c	\
		src/game/ai.c

OBJ =		$(SRC:.c=.o)

CFLAGS = 	-Wall -Wextra -I./include/

LDFLAGS = 	-L lib/my -lmy

RM = 		rm -f

all: 		$(NAME)

$(NAME): 	$(OBJ)
		$(MAKE) -C ./lib/my
		$(CC) -o $(NAME) $(OBJ) $(LIB) -lm $(LDFLAGS)

clean:
		$(RM) $(OBJ)
		$(MAKE) -C ./lib/my clean

fclean: 	clean
		$(RM) $(NAME)
		$(MAKE) -C ./lib/my fclean
		$(RM) vgcore.*

re: 		fclean all

.PHONY: 	all clean fclean re
