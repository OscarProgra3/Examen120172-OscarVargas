#include "Darquitectonicos.h"

Darquitectonicos::Darquitectonicos(string pid, string pnombre, string partista, string pfecha, string ptipo) : Obrasdearte(pid, pnombre,  partista, pfecha)
{
	tipo=ptipo;
}

string Darquitectonicos::getTipo()
{
	return tipo;
}
void Darquitectonicos::setTipo(string ttipo)
{
	tipo=ttipo;
}