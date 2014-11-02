#ifndef Vektor2D_h
#define Vektor2D_h
#include "Vektor.h"

class Vektor2D: public Vektor
{
public:
	Vektor2D(void);
	Vektor2D(float, float);
	virtual ~Vektor2D(void);
	void addiere(Vektor2D); 
	void ausgabe();
};
#endif
