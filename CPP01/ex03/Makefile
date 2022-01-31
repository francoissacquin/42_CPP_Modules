NAME = Violence

CC = clang++

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

INC = Weapon.hpp HumanA.hpp HumanB.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98 -I.

OBJS := ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJS}
			$(CC) $(CFLAGS) -o $(NAME) $^

%.o: %.cpp
		$(CC) $(CFLAGS) -o $@ -c $<
clean :
		rm -rf ${OBJS}

fclean : clean
			rm -rf ${NAME}

re	:	fclean all

.PHONY : clean fclean re