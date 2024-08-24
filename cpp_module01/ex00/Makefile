# Compiler and flags
CXX = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror -I includes

# Colours
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

# Background Colours
BGRED = \033[1:37;41m
BGREEN = \033[1:37;42m
BGYELLOW = \033[1:37;43m
BGBLUE = \033[1:37;44m
BGPURPLE = \033[1:37;45m
BGCYAN = \033[1:37;46m

# Reset Colour
NC = \033[0m

# Definitions
NAME = phonebook
SRC_DIR = .\
OBJ_DIR = object/

# Project Files

SOURCE_FILES = phonebook contact

SOURCES = $(addprefix $(SRC_DIR), $(addsuffix .cpp, $(SOURCE_FILES)))
OBJECTS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SOURCE_FILES)))

# Rules
all: $(NAME)

$(NAME): $(OBJECTS)
		@$(CXX) $(OBJECTS) $(CFLAGS) -o $(NAME)
		@echo "$(BGBLUE)         phonebook compiled.         $(NC)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
		@echo "$(BGREEN)       Compiling needed files        $(NC)"
		@echo "$(GREEN) -> Compiled: $(NC)$<"
		@$(CXX) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(BGPURPLE)        Deleting object files.       $(NC)"
	@echo "$(RED) -> Removed: $(NC)$(OBJECTS)$<"
	@rm -f $(OBJECTS)


fclean: clean
	@echo "$(BGPURPLE)    Deleting phonebook executable.   $(NC)"
	@rm -f $(NAME)
	@echo "$(RED) -> Removed: $(NC)$(NAME)"

re: fclean all

.PHONY: all clean fclean re