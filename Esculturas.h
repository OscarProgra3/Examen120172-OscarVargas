#include "Obrasdearte.h"
#include <string>

#ifndef ESCULTURA_H
#define ESCULTURA_H

using namespace std;

class Esculturas : public Obrasdearte
{	
	private: 
		double peso;
		string material;

	public:
		Esculturas(string,string,string,string,double,string);
		//~Esculturas();

		double getPeso();
		void setPeso(double);
		
		string getMaterial();
		void setMaterial(string);
};
#endif
