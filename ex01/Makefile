SRCS		= Animal.cpp Cat.cpp Dog.cpp main.cpp Brain.cpp

OBJS			= $(SRCS:.cpp=.o)

DEPS			= $(SRCS:.cpp=.d)

NAME			= brain
CC				= clang++
CFLAGS			= --std=c++98 -Wall -Wextra -Werror

all:			$(NAME)

%.d:			%.cpp
				$(CC) $(CFLAGS) -MM -MG -MT $(@:%.d=%.o) $< -o $@

%.o: 			%.cpp	%.d
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:			
				$(RM) $(OBJS)
				$(RM) $(DEPS)

fclean:			clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		re fclean clean all

-include $(DEPS)