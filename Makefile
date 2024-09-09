##
## EPITECH PROJECT, 2018
## Make
## File description:
## Makefile
##

CC	=	gcc

SRC	=	src/function.c	\
		src/display.c 	\
		src/dimension.c \
		main.c	\
		src/modele.c

OBJ	=	$(SRC:.c=.o)

NAME	=	rush3

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -W -Wall -Wextra $(SRC) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all


.phony:	clean fclean re all
