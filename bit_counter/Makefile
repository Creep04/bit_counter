NAME = bit-counter
SRCS = srcs/counter.c main.c
OBJECTS = counter.o main.o
IDIR = ./includes
CC = gcc
FLAGS = -Werror -Wall -Wextra

all : $(NAME)

$(NAME) :
	$(CC) -c $(FLAGS) $(SRCS) -I $(IDIR)
	$(CC) -o $(NAME) $(OBJECTS)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)
	
re : fclean all