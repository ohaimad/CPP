NAME = Animals

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

CC = c++

SRC =  AMateria.cpp \
	Character.cpp\
 	Cure.cpp\
 	Ice.cpp\
 	MateriaSource.cpp\
 main.cpp

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