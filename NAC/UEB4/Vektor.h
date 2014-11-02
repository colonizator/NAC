#ifndef Vektor_h
#define Vektor_h
#include "Matrix.h"

class Vektor: public Matrix
{
public:
	Vektor(void);
	virtual ~Vektor(void);
	float betrag();

};
#endif
