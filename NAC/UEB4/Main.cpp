#include "Matrix.h"
#include "Vektor2D.h"

using namespace std;

int main(int argc, char** argv) {
	{
		Vektor2D v(1,2), w(3,4);
		Matrix M;
		Matrix* Mpointer;
		M = v;
		Mpointer = &v;
		std::cout << "Ausgabe von M und mit Mpointer" << std::endl;
		M.ausgabe();
		Mpointer->ausgabe();
		v.addiere(w);
		std::cout << "Ausgabe von v nach Addieren" << std::endl;
		v.ausgabe();
		std::cout << "Ausgabe von M/Mpointer nach Add." << std::endl;
		M.ausgabe();
		Mpointer->ausgabe();
	}


	std::cout << getCounter() << std::endl;


	system("pause");


}
