Main:	Main.o Obrasdearte.o Literatura.o Esculturas.o Pinturas.o Darquitectonicos.o  
	g++ Main.o Obrasdearte.o Literatura.o Esculturas.o Pinturas.o Darquitectonicos.o -o Main

Main.o:	Main.cpp Obrasdearte.h Literatura.h Esculturas.h Pinturas.h Darquitectonicos.h 
	g++ -c Main.cpp

Obrasdearte.o:	Obrasdearte.cpp Obrasdearte.h
	g++ -c Obrasdearte.cpp

Literatura.o:	Literatura.cpp Literatura.h Obrasdearte.h
	g++ -c Literatura.cpp

Esculturas.o:	Esculturas.cpp Esculturas.h Obrasdearte.h
	g++ -c Esculturas.cpp

Pinturas.o:	Pinturas.cpp Pinturas.h Obrasdearte.h
	g++ -c Pinturas.cpp

Darquitectonicos.o:	Darquitectonicos.cpp Darquitectonicos.h Obrasdearte.h
	g++ -c Darquitectonicos.cpp


clean:	
	rm -f *.o Main
