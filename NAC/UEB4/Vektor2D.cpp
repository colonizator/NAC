#include "Vektor2D.h"

Vektor2D::Vektor2D(void) {
}

Vektor2D::Vektor2D(float x, float y) {
    m_Element[0] = x;
    m_Element[1] = y;
}


Vektor2D::~Vektor2D(void) {
}

void Vektor2D::addiere(Vektor2D v) {
    m_Element[0] += v.m_Element[0];
    m_Element[1] += v.m_Element[1];
}

void Vektor2D::ausgabe() {
	std::cout << "Vektor2D:" << std::endl;

	Matrix *mx;
	mx =dynamic_cast<Matrix*>(this);
	(*mx).ausgabe();
}
