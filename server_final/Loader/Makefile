NAME1	=	BasicBydo.so
NAME2	=	HugeBydo.so
NAME3	=	MediumBydo.so
NAME4	=	Missiles.so
NAME5	=	MonsterBonus.so
NAME6	=	PlayerShip.so

SRC_D	=	./src

BIN_D	=	./bin

RM		=	rm -f

CC		=	g++

CXXFLAGS	=	-shared -fPIC

LDFLAGS	=	-ldl

DUST	=	*~ \#*\# $(BIN_D)/*~ $(BIN_D)/\#*\# $(SRC_D)/*~ $(SRC_D)/\#*\#

all	:	 $(NAME1) $(NAME2) $(NAME3) $(NAME4) $(NAME5) $(NAME6)

$(NAME1)	:
			$(CC) $(CXXFLAGS) $(SRC_D)/BasicBydo.cpp -o ./bin/$(NAME1)

$(NAME2)	:
			$(CC) $(CXXFLAGS) $(SRC_D)/HugeBydo.cpp -o ./bin/$(NAME2)

$(NAME3)	:
			$(CC) $(CXXFLAGS) $(SRC_D)/MediumBydo.cpp -o ./bin/$(NAME3)

$(NAME4)	:
			$(CC) $(CXXFLAGS) $(SRC_D)/Missiles.cpp -o ./bin/$(NAME4)

$(NAME5)	:
			$(CC) $(CXXFLAGS) $(SRC_D)/MonsterBonus.cpp -o ./bin/$(NAME5)

$(NAME6)	:
			$(CC) $(CXXFLAGS) $(SRC_D)/PlayerShip.cpp -o ./bin/$(NAME6)

dust	:
			$(RM) $(DUST)

clean	:	dust
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(BIN_D)/*.so
			$(RM) $(BIN_D)/$(NAME)

re		:	clean all
