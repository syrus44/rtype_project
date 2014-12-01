NAME	=	server

INC_D	=	./inc/

SRCS	=	./map/LoadMap.cpp		\
		./map/main.cpp			\
		./map/Map.cpp			\
		./map/Parser.cpp		\
		./map/Rand.cpp			\
		./Loader/src/Exception.cpp	\
		./socket/ConvAddr.cpp		\
		./socket/ConvPort.cpp		\
		./socket/IMutex.cpp		\
		./socket/OsFactory.cpp		\
		./socket/PortToInt.cpp		\
		./socket/SerializeAddr.cpp	\
		./socket/UMutex.cpp		\
		./socket/USleep.cpp		\
		./socket/USocket.cpp		\
		./socket/Uthread.cpp

OBJS	=	$(SRCS:.cpp=.o)

RM	=	rm -f

DUST	=	*~ \#*\#

CC	=	g++

CXXFLAGS=	-W -Wall -Werror -I $(INC_D)

LDFLAGS	=	-lpthread -ldl

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) $(LDFLAGS) -o $(NAME) $(OBJS)

dust	:
		$(RM) $(DUST)

clean	:	dust
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all
