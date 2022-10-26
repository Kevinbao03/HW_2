# Makefile for f2022, ecs36b
#
# g++ -std=c++14 test_GPS.cpp GPS.cpp -o test_GPS
#
# example: $ ./test_GPS 48.88 2.3

CC = g++ -std=c++14

# CFLAGS = -g -I/usr/include/jsoncpp

CFLAGS = -I/opt/homebrew/Cellar/jsoncpp/1.9.5/include

# CFLAGS = -g -D_ECS36B_HW7_ -I/usr/include/jsoncpp
# CFLAGS = -g -DNOT_RIGHT_NOW -I/usr/include/jsoncpp

# CFLAGS = -g -D_ECS36B_DEBUG_ -I/usr/include/jsoncpp
# CFLAGS = -g -Wall -Wstrict-prototypes
# CFLAGS = -O3

LDFLAGS = 	-L/opt/homebrew/Cellar/jsoncpp/1.9.5/lib -ljsoncpp

INC	=	ecs36b_Common.h

# old: LDFLAGS = 	-lc++ -ljsoncpp

# LDFLAGS = 	-ljsoncpp -lmicrohttpd -ljsonrpccpp-common -ljsonrpccpp-server -lcurl -ljsonrpccpp-client


# rules.
all: 	main

#
#

Location.o: Location.cpp Location.h $(INC)
	$(CC) -c $(CFLAGS) Location.cpp


JvTime.o:	JvTime.cpp JvTime.h $(INC)
	$(CC) -c $(CFLAGS) JvTime.cpp

Person.o:	Person.cpp Person.h $(INC)
	$(CC) -c $(CFLAGS) Person.cpp

Thing.o:	Thing.cpp Thing.h $(INC)
	$(CC) -c $(CFLAGS) Thing.cpp


main.o:	main.cpp Thing.h Person.h JvTime.h $(INC)
	$(CC) -c $(CFLAGS) main.cpp

main:		Location.o main.o Thing.o Person.o JvTime.o 
	g++ -std=c++14 main.o Location.o Thing.o Person.o JvTime.o -o main $(LDFLAGS)

clean:
	rm -f *.o *~ core main


