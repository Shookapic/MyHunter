##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

CC = gcc

SRC = 	$(shell find . -type f -name '*.c')


NAME = my_hunter

CFLAGS = -W -Werror -Wall -Wextra -g

LFLAGS = -lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window

INCLUDE = -I include/

RM = rm -rf

all:
	gcc -o $(NAME) $(SRC) $(CFLAGS) $(LFLAGS) $(INCLUDE) $(LIB)

clean:
	$(RM) src/*.o
	$(RM) ./*.o

fclean: clean
	$(RM) $(NAME)

re: clean all
