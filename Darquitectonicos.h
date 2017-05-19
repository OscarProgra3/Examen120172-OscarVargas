#include "Obrasdearte.h"
#include <string>


#ifndef DARQUITECTONICOS_H
#define DARQUITECTONICOS_H

using namespace std;

class Darquitectonicos : public Obrasdearte
{
	private:
		string tipo;
	public:

		Darquitectonicos(string,string,string,string,string);

		string getTipo();
		void setTipo(string);
		//~Darquitectonicos();
		
};
#endif