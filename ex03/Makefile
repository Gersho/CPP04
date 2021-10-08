SRCS		= AMateria.cpp Character.cpp MateriaSource.cpp Ice.cpp Cure.cpp


OBJS			= $(SRCS:.cpp=.o)

NAME			= ff7
CC				= clang++
RM				= rm -f
CFLAGS			= --std=c++98 -Wall -Wextra -Werror

all:			$(NAME)

%.o: 			%.cpp	AMateria.hpp Character.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp Ice.hpp Cure.hpp
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS) AMateria.hpp Character.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp Ice.hpp Cure.hpp
				$(CC) $(CFLAGS) -IAMateria.hpp -ICharacter.hpp -IICharacter.hpp -IIMateriaSource.hpp -IMateriaSource.hpp -ICure.hpp -IIce.hpp -o $(NAME) $(OBJS)

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		re fclean clean all