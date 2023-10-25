

all: final
final : oneHand.o  
	@echo "Making a final file"
	gcc -o final oneHand.o

oneHand.o : one-hand.c
	@echo "Making -o file"
	g++ one-hand.c -o oneHand.o

clean: 
	rm oneHand.o final

