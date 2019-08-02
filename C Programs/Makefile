NAME = lib_test.a
FILES = putstr.c strcpy.c strlen.c swap.c power_of_two.c
FLAG = -Wall -Werror -Wextra
OBJ = putstr.o strcpy.o strlen.o swap.o power_of_two.o

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(FILES)
	ar rc $(NAME) $(OBJ)
clean:
	/bin/rm -f $(OBJ)
fclean:
	/bin/rm -f $(NAME)
re: fclean all	
