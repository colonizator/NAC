#include "Vektor.h"


Vektor::Vektor(void) {
}

Vektor::~Vektor(void) {
}

float Vektor::betrag() {
    float result = 0.f;
    for (int i(0); i < m_Spalten * m_Zeilen; i++)
        result += m_Element[i];
    return result;
}