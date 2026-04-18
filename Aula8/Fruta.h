#ifndef FRUTA_H
#define FRUTA_H
#include <iostream>

class Fruta
{
private:
    double preco;
public:
    Fruta(double preco);
    double getPreco();
    void setPreco(double preco);
    double calcula_preco(double imposto);
};

#endif