#include <iostream>

class Nodo
{
private:
	int Dato;
	Nodo *Sig;

public:
//Constructor
	Nodo(int Dato, Nodo *Sig);
	Nodo(int Dato);

//Métodos Set y Get
	void setDato(int Dato);
	void setSig(Nodo *Sig);
	int getDato();
	Nodo* getSig();
};

