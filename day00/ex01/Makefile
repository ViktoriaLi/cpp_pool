NAME = phonebook

SFILES = main.cpp PhoneBook.cpp

OFILES = main.o PhoneBook.o

all: $(NAME)

$(NAME): $(OFILES)
	clang++ $(OFILES) -o $(NAME)

$(OFILES):%.o:%.cpp
	clang++ -Wall -Wextra -Werror -c $(SFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
