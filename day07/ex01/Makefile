NAME = iter

SFILES = iter.cpp

OFILES = iter.o

all: $(NAME)

$(NAME): $(OFILES)
	clang++ $(OFILES) -o $(NAME)

$(OFILES):%.o:%.cpp
	clang++ -Wall -Wextra -Werror -c $(SFILES) -o $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
