NAME = animalSounds
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRCS_DIR = srcs
SRCS = main.cpp $(SRCS_DIR)/Cat.cpp $(SRCS_DIR)/Dog.cpp $(SRCS_DIR)/AAnimal.cpp $(SRCS_DIR)/AWrongAnimal.cpp \
	   $(SRCS_DIR)/WrongCat.cpp $(SRCS_DIR)/Brain.cpp
OBJS_DIR = objs
OBJS = ${SRCS:%.cpp=$(OBJS_DIR)/%.o}

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $@

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(FLAGS) -c $< -o $@ 

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
