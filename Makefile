
all: power.o basicMath.o main.o mymaths mymathd mains maind  

power.o: power.c myMath.h 
	gcc -Wall -g -fPIC -c power.c
	
basicMath.o: basicMath.c myMath.h 
	gcc -Wall -g -c basicMath.c

main.o: main.c myMath.h 
	gcc -Wall -g -c main.c

mymaths: power.o basicMath.o
	ar -rcs libmyMath.a power.o basicMath.o

mains: mymaths main.o 
	gcc -Wall -g -o mains main.o libmyMath.a

maind: mymathd main.o
	gcc -Wall -g -o maind main.o ./libmyMath.so

mymathd: basicMath.o power.o 
	gcc -shared -o libmyMath.so basicMath.o power.o

.PHONY: clean all

clean:
	rm *.o *.a *.so mains maind
