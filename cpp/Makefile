CFLAGS=-g

blackjack: blackjack.o card.o shoe.o
	g++ -o $@ $^ $(CFLAGS)

blackjack.o: blackjack.cpp
	g++ -c -o $@ blackjack.cpp

card.o: card.cpp card.h
	g++ -c -o $@ card.cpp

shoe.o: shoe.cpp shoe.h
	g++ -c -o $@ shoe.cpp
