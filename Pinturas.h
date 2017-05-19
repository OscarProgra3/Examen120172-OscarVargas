#include "Obrasdearte.h"
#include <string>

#ifndef PINTURAS_H
#define PINTURAS_H

using namespace std;

class Pinturas : public Obrasdearte
{
	private:
		string material,tecnica;

	public:
		Pinturas(string,string,string,string,string,string);
		//~Pinturas();

		string getMaterial();
		void setMaterial(string);

		string getTecnica();
		void setTecnica(string);
	
};
#endif