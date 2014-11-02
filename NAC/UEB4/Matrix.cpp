#include "Matrix.h"

Matrix::Matrix(void): m_Zeilen(2), m_Spalten(1) {
    for (int i(0); i < m_Spalten * m_Zeilen; i++)
        m_Element[i] = 0.f;
    std::cout << "Standartkonstruktor von Matrix wurde aufgerufen" << std::endl;
	counter++;
}

void Matrix::ausgabe() {
    for (int i(0); i < m_Spalten * m_Zeilen; i++)
        std::cout << ((i == 0) ? "" : ", ") << m_Element[i];
    std::cout << std::endl;
}

int getCounter(){
	return counter;
}

Matrix::~Matrix(void) {
	counter --;
}
