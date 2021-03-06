#include "Lista.h"

//Creación de una nueva lista vacía
Lista::Lista()
{
	this->H = NULL;
	this->T = NULL;
}

//Lista con un nodo, T y H apuntando a auxiliar
Lista::Lista(int Dato)
{
	Nodo *aux = new  Nodo(Dato);
	this->H = aux; 
	this->T = aux;
}

//Verifica si la lista está vacía
bool Lista::IsVacio()
{
	if (this->H == NULL && this->T == NULL)
		return true;
	return false;
}

//Añade un nodo al Principio de la lista
void Lista::InsertarP(int Dato)
{
	Nodo *aux = new Nodo(Dato,this->H);
	if (IsVacio())
	{		
		this->T = aux;
	}
	this->H = aux;
}
//Añade un nodo al Final de la lista
void Lista::InsertarF(int Dato)
{
	Nodo *aux = new Nodo(Dato);
	if (!IsVacio())
	{
		this->T->setSig(aux);
		this->T = aux;
	}
	else
	{
		this->H = aux;
		this->T = aux;
	}
}

//Elimina el nodo al Principio de la lista
int Lista::BorrarP()
{
	if (!IsVacio())
	{
		int Dato = H->getDato();
		this->H = H->getSig();
		if (H == NULL)
		{
			this->T = NULL;
		}
		return Dato;
	}
	else
	{
	std::cout<<"La lista está vacia "<<std::endl;
	return NULL;
	}
}

//Elimina el nodo al Final de la lista
int Lista::BorrarF()
{
	if (IsVacio())
	{
		std::cout<< "La lista está vacia " <<std::endl;
		return NULL;
	}
	else
	{
	int Dato = this->T->getDato();
	if (this->H != this->T)
	{
		Nodo *aux = this->H;
		while(aux->getSig() != this->T)
		{
			aux = aux->getSig();
		}
	
		T = aux;	
		T->setSig(NULL);	
	}
	else
	{
		H = NULL;
		T = NULL;
	}
	return Dato;
	}
}

//Limpia la lista
void Lista::VaciarLista()
{
	if (IsVacio())
	{
		std::cout<< "La lista está vacia " <<std::endl;
		
	}
	else
	{
		Nodo *aux = H;
		while(aux != NULL)
		{
			this->H = H->getSig();
			aux = aux->getSig();
		}
		
	}
}

//Buscar un elemento
Nodo *Lista::Buscar(int Dato)
{
	if (!IsVacio())
	{
		Nodo* aux = H;
		while(aux->getDato()!= Dato && aux!=T)
		{
			aux=aux->getSig();
		}
		if(aux->getDato() == Dato)
		{
			return aux;
		}
		else
		{
			std::cout<<"No se encontró el elemento."<<std::endl;
		}
	}
	else
	{
		std::cout<<"La lista está vacía, no se encontró el elemento."<<std::endl;	
		return NULL;
	}	
}

//Añadir un nodo a partir de una referencia

void Lista::InsertarRef(int Dato, int Ref)
{
	if (IsVacio())
	{
		Nodo *aux = new Nodo(Dato);
		this->H = aux;
		this->T = this->H;
		std::cout << "La lista está vacía, no se encontró el elemento." << std::endl;
		return ;
	}
	else
	{
		Nodo *aux2 = Buscar(Ref);
		if(Buscar(Ref)->getDato() == Ref)
		{
			Nodo *aux = new Nodo(Dato,aux2->getSig());
			aux2->setSig(aux);
		}
		else
		{
			std::cout << "No se encontró la referencia, intente con otro dato." << std::endl;
		}
	}
}

//Borra un nodo a partir de una referencia
int Lista::BorrarRef(int Ref)
{
	if(IsVacio())
	{
		std::cout<< "La lista esta vacia." <<std::endl;
	}
	else
	{
		Nodo *aux = this->H;
		int Dato;
		if(aux == Buscar(Ref))
		{
			Dato = BorrarP();
			return Dato;
		}
		else if((aux == Buscar(Ref)) && (aux == this->T))
		{
			Dato = BorrarF();
			return Dato;
		}
		else if(aux != Buscar(Ref) && (aux == this->T))
		{
			std::cout<< "No se encontró la referencia." <<std::endl;
			return NULL;
		}
		else
		{
			int Dato = Buscar(Ref)->getDato();
			while(aux->getSig() != Buscar(Ref))
			{
				aux = aux->getSig();
			}		
			Nodo *aux2 = aux->getSig();
			aux->setSig(aux2->getSig());
			aux2->setSig(NULL);
			return Dato;
		}	
	}
}

//Muestra los elementos de la lista.

void Lista::Show()
{
	Nodo* aux = this->H;
	while(aux != NULL)
	{
		std::cout<< aux->getDato() <<std::endl;
		aux = aux->getSig();
	}
}


