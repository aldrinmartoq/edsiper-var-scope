CPP     = c++
INC     = 
CFLAGS  = -g 
LIBS    = main.o utils.o
OBJS    = main.cpp utils.c

all: var_scope_test

var_scope_test: $(OBJS)
	$(CPP) -c $(INC) $(CFLAGS) $(OBJS)
	$(CPP) -o $@ $(LIBS)

clean:
	rm -rf var_scope_test *.o *~
