NAME = AMateria
CC = c++
FLAGS = -g -Wall -Werror -Wextra -std=c++98
SRCS = AMateria.cpp Ice.cpp Cure.cpp Character.cpp FtList.cpp MateriaSource.cpp main.cpp
OBJS = ${SRCS:%.cpp=%.o}

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@ 

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
