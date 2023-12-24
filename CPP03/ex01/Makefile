NAME = ScavTrap

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all