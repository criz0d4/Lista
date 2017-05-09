#include "Nodo.h" 

class Lista
{
public:
	Nodo *H;
	Nodo *T;

//Constructor
	Lista();
	Lista(int Dato);

//Métodos
	bool IsVacio();

	void InsertarP(int Dato);
	void InsertarF(int Dato);
	void InsertarRef(int Dato,int Ref);

	int BorrarP();
	int BorrarF();
	int BorrarRef(int Ref);

	Nodo *Buscar(int Dato);

	void VaciarLista();
	void Show();
};
