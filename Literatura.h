#include "Obrasdearte.h"

#ifndef LITERATURA_H
#define LITERATURA_H

using namespace std;

class Literatura : public Obrasdearte
{
	private: 
		string genero;
		string	epoca;

	public:
		Literatura(string,string,string,string,string,string);


		string getGenero();
		void setGenero(string);

		string getEpoca();
		void setEpoca(string);

		//~Literatura();
	
};
#endif