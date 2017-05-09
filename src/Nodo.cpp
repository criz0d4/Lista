#include "Nodo.h"

//Nodo que guardará un dato y el apuntador al nodo siguiente
Nodo::Nodo(int Dato, Nodo *Sig)
{
	this->Dato = Dato;
	this->Sig = Sig;
}

//Nodo apuntando a Null (ünico nodo)
Nodo::Nodo(int Dato)
{
	this->Dato = Dato;
	this->Sig = NULL;
}

//Asignación de un dato
void Nodo::setDato(int Dato)
{
	this->Dato = Dato;
}

//Apunta al siguiente elemento
void Nodo::setSig(Nodo *Sig)
{
	this->Sig = Sig;
}

//Para obtener el dato contenido en un nodo
int Nodo::getDato()
{
	return this->Dato;
}

//Para obtener el dato del siguiente nodo
Nodo *Nodo::getSig()
{
	return this->Sig;
}
