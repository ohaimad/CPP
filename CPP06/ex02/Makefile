NAME = Base

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

SRC = main.cpp Generator.cpp Identifier.cpp Base.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp A.hpp B.hpp Base.hpp C.hpp Generator.hpp Identifier.hpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all