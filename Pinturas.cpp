#include "Pinturas.h"

Pinturas::Pinturas(string pid, string pnombre, string partista, string pfecha, string pmaterial, string ptecnica) : Obrasdearte(pid, pnombre,  partista, pfecha)
{
	material=pmaterial;
	tecnica=ptecnica;
}

string Pinturas::getMaterial()
{
	return material;
}
void Pinturas::setMaterial(string tmaterial)
{
	material=tmaterial;
}

string Pinturas::getTecnica()
{
	return tecnica;
}
void Pinturas::setTecnica(string ttecnica)
{
	tecnica=ttecnica;
}