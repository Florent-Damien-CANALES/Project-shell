##
## EPITECH PROJECT, 2020
## my_hunter
## File description:
## Makefile
##

SRC	=	main.c						\
		src/mysh.c					\
		src/copy_env.c				\
		src/control_c_handler.c		\
		src/execute_command.c		\
		src/parser.c				\
		src/swiffer.c				\
		src/command_recognition.c	\
		src/env_command.c			\
		src/exit_command.c			\
		src/cd_command.c			\
		src/setenv_command.c		\
		src/copy_tab.c				\
		src/check_value.c			\
		src/free_tab.c

OBJ =	$(SRC:.c=.o)

NAME	=	mysh

CPPFLAGS = -I	./include/	-I	../include/

all:	$(NAME)

lib:
		$(MAKE)	-C	lib/

$(NAME):	lib	$(OBJ)
	gcc -o $(NAME)	$(OBJ)	$(CPPFLAGS)	-L./lib	-lmy

clean:
	rm -f $(OBJ)
	$(MAKE)	clean	-C	lib/

fclean:	clean
	rm -f $(NAME)
	$(MAKE)	fclean	-C	lib/

re:	fclean	all
	$(MAKE)	re	-C	lib/

.PHONY:	all	lib	clean	fclean	re