SRCS		= AAnimal.cpp Cat.cpp Dog.cpp main.cpp Brain.cpp


OBJS			= $(SRCS:.cpp=.o)

NAME			= abstract
CC				= clang++
RM				= rm -f
CFLAGS			= --std=c++98 -Wall -Wextra -Werror

all:			$(NAME)

%.o: 			%.cpp	AAnimal.hpp Cat.hpp Dog.hpp Brain.hpp
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS) AAnimal.hpp Cat.hpp Dog.hpp
				$(CC) $(CFLAGS) -IAAnimal.hpp -ICat.hpp -IBrain.hpp -IDog.hpp -o $(NAME) $(OBJS)

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		re fclean clean all