#ifndef MELANCIA_H
#define MELANCIA_H
#include <iostream>
#include "Fruta.h"

class Melancia: public Fruta
{
private:
    double precoAdicional;
    bool epoca;
public:
    Melancia(double preco, double precoAdicional, bool epoca);
    double getPrecoAdicional();
    bool getEpoca();
    void setPrecoAdicional(double precoAdicional);
    void setEpoca(bool epoca);
    double calcula_preco_final();
};
#endif