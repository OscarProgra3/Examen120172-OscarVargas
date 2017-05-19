#include "Obrasdearte.h"
#include "Esculturas.h"
#include "Literatura.h"
#include "Pinturas.h"
#include "Darquitectonicos.h"

#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <sstream>

using namespace std;

string hexadecimal();
void listarObras(vector <Obrasdearte*> listaobrasT);

int main()
{
	srand(time(NULL));
	vector<Obrasdearte*> listaobras;
	vector<Obrasdearte*> listaotromuseo;


	int resp=9;
	while(resp!=6)
	{
		cout<<endl<<"Bienvenido\n1.-Agregar\n2.-Eliminar\n3.-Buscar\n4.-transferir\n5.-Listar\n6.-Salir\nIngrese su opcion: ";
		cin>>resp;

		if (resp==1)//AGREGAR
		{
			int opcagregar=9;
			while(opcagregar!=5)
			{
				cout<<endl<<"¿Que desea agregar?\n1.-Literatura\n2.-Escultura\n3.-Pinturas\n4.-Diseños Arquitectonicos\n5.-Salir\nIngrese su opcion:";
				cin>>opcagregar;
				cout<<endl;

				string id;
				string nombre;
				string artista;
				string fecha;

				if (opcagregar!=5)
				{
					
					id=hexadecimal();

					cout<<endl<<"ID: "<<id<<endl;
					cout<<"ingrese el nombre de la obra: ";
					cin>>nombre;

		
					cout<<"ingrese el artista de la obra: ";
					cin>>artista;

					
					cout<<"ingrese la fecha de ingreso de la obra: ";
					cin>>fecha;
				}
				
				if (opcagregar==1)//agregando literatura
				{
					cout<<endl;
					string generol;
					cout<<"Ingrese genero Literario: ";
					cin>>generol;
					string epoca;
					cout<<endl<<"Ingrese Epoca: ";
					cin>>epoca;

					listaobras.push_back(new Literatura(id,nombre,artista,fecha,generol,epoca));

				}//fin agregar literatura
				if (opcagregar==2)//agregando escultura
				{
					double peso;
					cout<<"Ingrese el peso de la escultura: ";
					cin>>peso;
					string materiale;
					cout<<"Ingrese el material de la escultura";
					cin>>materiale;

					listaobras.push_back(new Esculturas(id,nombre,artista,fecha,peso,materiale));
				}//fin agregar escultura
				if (opcagregar==3)//agregando pintura
				{
					string materialp;
					cout<<"Ingrese el material del lienzo";
					cin>>materialp;	

					string tecnicap;
					cout<<"Ingrese la tecnica que se utilizo";
					cin>>tecnicap;	

					listaobras.push_back(new Pinturas(id,nombre,artista,fecha,materialp,tecnicap));
				}//fin agregar pintura
				if (opcagregar==4)//agregando diseño
				{
					string terreno;
					cout<<"Ingrese el tipo de terreno";
					cin>>terreno;


					listaobras.push_back(new Darquitectonicos(id,nombre,artista,fecha,terreno));
				}//fin agregardiseño

				

			}

		}//FIN AGREGAR


		if (resp==2)//eliminar
		{
				int sacrificio;
				listarObras(listaobras);
				cout<<endl<<"¿Que obra desea sacrificar?"<<endl;
				cin>>sacrificio;

				listaobras.erase(listaobras.begin() + sacrificio);
				cout<<endl<<"La eliminacion se realizo exitosamente"<<endl;

		}//fin eliminar
		
		if (resp==3)//Buscar
		{
			string artistab;
			cout<<"Ingrese el nombre del artista para buscar sus obras: ";
			cin>>artistab;
			
			cout<<"-----------------------------------------------------";
			for (int i = 0; i < listaobras.size(); ++i)
			{
				if (listaobras.at(i)->getArtista()==artistab)
				{
					cout<<endl<<"*****************************************";
					cout << endl<<"Nombre: "<<listaobras.at(i)->getNombre()<<endl;
					cout << endl<<"Id de la obra "<<listaobras.at(i)->getId();
				}
			}
			cout<<"-----------------------------------------------------";



		}//fin Buscar
		if (resp==4)//transferir
		{
			int trans;
			listarObras(listaobras);
			cout<<endl<<"¿Que obra desea transferir?"<<endl;
			cin>>trans;

			listaotromuseo.push_back(listaobras.at(trans));
			cout<<endl<<"La transsaccion se realizo exitosamente"<<endl;


			listaobras.erase(listaobras.begin() + trans);
			

			
		}//fin transferir

		if (resp==5)//Listar
		{
			cout<<endl<<"|----------Museo de arte Británico---------------------|";
			listarObras(listaobras);
			cout<<endl<<endl<<"********************Otro Museo*****************";
			listarObras(listaotromuseo);
			
		}//fin listar

	}


	return 0;
}

string hexadecimal() {
	int r;
	stringstream random1;
	string random2;
	for (int i = 0; i < 6; ++i)
	{
		r = rand() % 15 + 0;
		if (r == 10)
		{
			random1 << "A";
		} else if (r == 11)
		{
			random1 << "B";
		} else if (r == 12)
		{
			random1 << "C";
		} else if (r == 13)
		{
			random1 << "D";
		} else if (r == 14)
		{
			random1 << "E";
		} else if (r == 15)
		{
			random1 << "F";
		} else {
			random1 << r;
		}
	}
	random2 = random1.str();
	return random2;
}


void listarObras(vector <Obrasdearte*> listaobrasT)
{
	cout<<endl<<"----------LISTA DE OBRAS---------------------";
	for (int i = 0; i < listaobrasT.size(); ++i)
	{
		cout << endl<<"        Numero de obra: " << (i) << endl;
		cout << endl<<"Nombre: "<<listaobrasT.at(i)->getNombre()<<endl;
		cout << endl<<"Id de la obra "<<listaobrasT.at(i)->getId();
		cout << endl<<"Artista: "<<listaobrasT.at(i)->getArtista();
		cout << endl<<"Fecha de ingreso "<<listaobrasT.at(i)->getFecha();
			

		cout <<endl<< "----------------------------------------------" << endl;
	}
}

