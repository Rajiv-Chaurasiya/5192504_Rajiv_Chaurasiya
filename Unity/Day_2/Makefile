#target name : <dependencies>
# <tab> commands to generate target

object.o : *.c
	gcc -c *.c
#make .exe

all : main.o divide.o sum.o square.o unity.o
	gcc *.o -o all.out
#make .exe all

run : all
	./all.out
#make .exe run

clean :
	rm -rf *.o all.out 
#make .exe clean


