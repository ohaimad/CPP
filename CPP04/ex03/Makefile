NAME = Animals

CXXFLAGS = #-Wall -Wextra -Werror -std=c++98

CC = c++

SRC =  AMateria.cpp \
ICharacter.cpp\
 Cure.cpp\
 Ice.cpp\
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