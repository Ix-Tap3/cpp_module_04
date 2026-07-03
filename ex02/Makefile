NAME = animalSounds
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp Cat.cpp Dog.cpp AAnimal.cpp AWrongAnimal.cpp WrongCat.cpp Brain.cpp
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
