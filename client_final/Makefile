NAME	=	client

INC_D	=	/usr/local/include/SFML/

LIB	=	/usr/local/lib

SRCS	=	./ConvAddr.cpp		\
		./ConvPort.cpp		\
		./Core.cpp		\
		./Display.cpp		\
		./main.cpp		\
		./Mainmenu.cpp		\
		./Parser.cpp		\
		./PortToInt.cpp		\
		./Score.cpp		\
		./SerializeAddr.cpp	\
		./USocket.cpp

OBJS	=	$(SRCS:.cpp=.o)

RM	=	rm -f

CC	=	g++

CXXFLAGS=	-W -Wall -Werror -I $(INC_D)

LDFLAGS	=	-L $(LIB) -lsfml-system -lsfml-graphics -lsfml-window -lsfml-audio  -lGLEW

DUST	=	*~ \#*\#

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

