#include "Escultura.h"

Escultura::Escultura(string pid, string pnombre, string partista, string pfecha,double ppeso, string pmaterial) : Obrasdearte(pid, pnombre,  partista, pfecha)
{
	peso=ppeso;
	material=pmaterial;
}

double Escultura::getPeso()
{
	return peso;
}
void Escultura::setPeso(double tpeso)
{
	peso=tpeso;
}
		
string Escultura::getMaterial()
{
	return material;
}
void Escultura::setMaterial(string tmaterial)
{
	material=tmaterial;
}