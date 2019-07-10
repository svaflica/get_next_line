NAME = libft.a
FILES = $(wildcard *.c)
OBJ = *.o
FLAGS = -Wall -Werror -Wextra
HEADER = libft.h

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c -I $(HEADER) $(FILES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
