edit : myprogram.o geo.o
	cc -o edit myprogram.o geo.o 

myprogram.o : myprogram.c geo.h
	cc -c myprogram.c
geo.o : geo.c
	cc -c geo.c

clean :
	rm edit myprogram.o geo.o
