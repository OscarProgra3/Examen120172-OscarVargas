#include <string>
#include <iostream>

#ifndef OBRASDEARTE_H
#define OBRASDEARTE_H

using namespaces std;

class Obrasdearte
{
	protected: 
		string id;
		string nombre;
		string artista;
		string fechaingreso;

	public:
		Obrasdearte();
		Obrasdearte(string,string,string,string);
		//~Obrasdearte();


		string getId();
		void setId(string);	

		string getNombre();
		void setNombre(string);	

		string getArtista();
		void setArtista(string);

		string getFecha();
		void setFecha(string);		
};
#endif