#include "Lista.h"

int main()
{
	Lista l = Lista();
	l.InsertarP(1);
	l.InsertarF(2);
	l.InsertarF(3);
	l.InsertarF(4);
	l.Show();
	std::cout<< " "<< std::endl;
	l.Buscar(3);
	l.BorrarP();
	l.BorrarF();
	l.Show();
	l.VaciarLista();
	return 0;
}
