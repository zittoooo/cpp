NAME = ex03
SRC	 =  AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \
		MateriaSource.cpp \
		main.cpp
OBJ  = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	clang++ -Wall -Wextra -Werror $^ -o $@ 

%.o : %.cpp
	clang++ -Wall -Wextra -Werror -c $<

re : fclean all

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)
