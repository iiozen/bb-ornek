IDIR =include
CC =gcc
CFLAGS =-I$(IDIR)

build: main.o merhaba.o sayiAl.o hesapla.o
	$(CC) -o toplayici main.o merhaba.o sayiAl.o hesapla.o
	rm *.o