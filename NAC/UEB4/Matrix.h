#ifndef Matrix_h
#define Matrix_h
#include <iostream>

int static counter = 0;
int getCounter();

class Matrix
{
public:
	Matrix(void);
	virtual ~Matrix(void);
	void ausgabe();

protected:
	int m_Zeilen, m_Spalten;
	float m_Element[2];

};

#endif

