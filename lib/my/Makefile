##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Done for the lib
##

CC = 		gcc

SRC= 		my_putchar.c			\
		my_put_nbr.c			\
		my_putstr.c			\
		my_getnumber.c			\
		my_memset.c			\
		my_strcat.c			\
		my_strlen.c			\
		my_realloc.c

OBJ= 		$(SRC:.c=.o)

CFLAGS = 	-Wall -Wextra

RM = 		rm -f

NAME = 		libmy.a

all: 		$(NAME)

$(NAME): 	$(OBJ)
		$(CC) -c $(SRC)
		ar rc $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean: 	clean
		$(RM) $(NAME) ../$(NAME)

re: 		fclean all

.PHONY: 	all clean fclean
