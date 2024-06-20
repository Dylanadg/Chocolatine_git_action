##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## makefile of the project minishell1
##

SRC	=	./src/main.c	\
		./lib/my_strdup.c	\
		./lib/my_strcmp.c	\
		./lib/my_str_to_word_array.c	\
		./lib/my_strtok.c	\
		./lib/free_array.c	\
		./lib/my_strlen.c	\
		./lib/mini_printf.c	\
		./lib/fct_printf.c	\

OBJ     =       $(SRC:.c=.o)

NAME    =       test_choco

CFLAGS	=	-Wall -Wextra -g3

CPPFLAGS	=	-Iinclude/

CC	=	gcc

all:    $(NAME)

$(NAME):        $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

test_run:	$(CC) -o unit test.c --coverage -lcriterion
		./unit

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all
		rm $(OBJ)
