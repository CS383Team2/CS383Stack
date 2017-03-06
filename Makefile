#  Makefile
# A good source for Makefiles
# http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

CC=g++
CFLAGS=

SRCS=	main.cpp stack.cpp linkedList.cpp

OBJS=	main.o stack.o linkedList.o RockPaperScissors.o

#name of program executable
TARGET=main

# This takes all .o objects and compiles them into target executable
$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# These are the .o rules for every file
main.o:	main.cpp stack.h linkedList.h
	$(CC) -c main.cpp

stack.o:	stack.cpp stack.h linkedList.h
	$(CC) -c stack.cpp

linkList.o:	linkedList.cpp linkedList.h
	$(CC) -c linkedList.cpp

RockPaperScissors.o: RockPaperScissors.h RockPaperScissors.cpp stack.o
	$(CC) -c RockPaperScissors.cpp

# This removes target and all .o files
clean::
	$(RM) $(TARGET) *.o

# Someday when we get a latex doc, it can be compiled here (or we just write a deditaced script)
latex::
	latex stack.tex    

###########################################################################
# common rules for all Makefiles - do not edit
#
# emptyrule::
#
# clean::
# 	rm *.o
#
###########################################################################
