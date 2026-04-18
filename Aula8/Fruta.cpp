#include <iostream>
#include "Fruta.h"

Fruta::Fruta(double preco)
{
    this->preco = preco;
}

double Fruta::calcula_preco(double imposto)
{
    preco = preco * (imposto/100);
    return preco;
}