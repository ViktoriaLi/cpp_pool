NAME = replace

SFILES = main.cpp

all: $(NAME)

$(NAME):
	clang++ -Wall -Wextra -Werror $(SFILES) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
