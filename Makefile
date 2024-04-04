all: VendingMachine

VendingMachine: main.o vendingmachine.o
	g++ -o VendingMachine main.o vendingmachine.o

main.o: main.cpp vendingmachine.h
	g++ -c -o main.o main.cpp

vendingmachine.o: vendingmachine.cpp vendingmachine.h
	g++ -c -o vendingmachine.o vendingmachine.cpp

clean:
	rm -f VendingMachine
	rm -f *.o
