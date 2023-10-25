

all: final

final : main.o  
	@echo "Making a final file"
	gcc -o final main.o

main.o : one-hand.c
	@echo "Making -o file"
	g++ one-hand.c -o main.o

clean: 
	rm main.o final
