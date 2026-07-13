NAME = AMateria
CC = c++
FLAGS = -g -Wall -Werror -Wextra -std=c++98
SRCS_DIR = srcs
SRCS = $(SRCS_DIR)/AMateria.cpp $(SRCS_DIR)/Ice.cpp $(SRCS_DIR)/Cure.cpp $(SRCS_DIR)/Character.cpp \
	   $(SRCS_DIR)/FtList.cpp $(SRCS_DIR)/MateriaSource.cpp main.cpp
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
