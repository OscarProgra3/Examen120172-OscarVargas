#include "Literatura.h"

Literatura::Literatura(string pid, string pnombre, string partista, string pfecha,string pgenero, string pepoca) : Obrasdearte(pid, pnombre,  partista, pfecha)
{
	genero=pgenero;
	epoca=pepoca;
}

string Literatura::getGenero()
{
	return genero;
}
void Literatura::setGenero(string tgenero)
{
	genero=tgenero;
}

string Literatura::getEpoca()
{
	return epoca;
}
void Literatura::setEpoca(string tepoca)
{
	epoca=tepoca;
}