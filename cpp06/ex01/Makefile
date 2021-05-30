CXX = clang++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ex01
SRCS = 	Data.cpp \
		main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $^ -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all