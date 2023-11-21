NAME = Zombie

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp 
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all