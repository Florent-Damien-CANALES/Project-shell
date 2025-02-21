##
## EPITECH PROJECT, 2020
## minishell2
## File description:
## Makefile
##

SRC	=	my_putchar.c														\
		my_putstr.c															\
		my_strcmp.c															\
		my_strlen.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc	$(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all