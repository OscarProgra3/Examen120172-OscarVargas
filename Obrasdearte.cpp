#include "Obrasdearte.h"

Obrasdearte::Obrasdearte(string pid, string pnombre, string partista, string pfecha)
{
	id=pid;
	nombre=pnombre;
	artista=partista;
	fechaingreso=pfecha;
}


string Obrasdearte::getId()
{
	return id;
}
void Obrasdearte::setId(string tid)
{
	id=tid;
}	

string Obrasdearte::getNombre()
{
	return nombre;
}
void Obrasdearte::setNombre(string tnombre)
{
	nombre=tnombre;
}	

string Obrasdearte::getArtista()
{
	return artista;
}
void Obrasdearte::setArtista(string tartista)
{
	artista=tartista;
}

string Obrasdearte::getFecha()
{
	return fechaingreso;
}
void Obrasdearte::setFecha(string tfecha)
{
	fechaingreso=tfecha;
}	