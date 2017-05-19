#include "Esculturas.h"

Esculturas::Esculturas(string pid, string pnombre, string partista, string pfecha,double ppeso, string pmaterial) : Obrasdearte(pid, pnombre,  partista, pfecha)
{
	peso=ppeso;
	material=pmaterial;
}

double Esculturas::getPeso()
{
	return peso;
}
void Esculturas::setPeso(double tpeso)
{
	peso=tpeso;
}
		
string Esculturas::getMaterial()
{
	return material;
}
void Esculturas::setMaterial(string tmaterial)
{
	material=tmaterial;
}