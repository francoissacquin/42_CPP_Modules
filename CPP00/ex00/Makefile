NAME = megaphone

CC = clang++

SRCS = megaphone.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

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

.PHONY : clean fclean re
