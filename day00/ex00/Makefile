NAME = megaphone

SFILES = megaphone.cpp

OFILES = megaphone.o

all: $(NAME)

$(NAME): $(OFILES)
	clang++ $(OFILES) -o $(NAME)

$(OFILES):%.o:%.cpp
	clang++ -std=c++98 -Wall -Wextra -Werror -c $(SFILES) -o $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
