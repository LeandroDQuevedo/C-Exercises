#include <iostream>
#include "Fruta.h"
#include "Banana.h"

Banana::Banana(double preco, string tipo):Fruta(preco)
{
    this->tipo = tipo;
}

string Banana::getTipo()
{
    return tipo;
}

void Banana::setTipo(string tipo)
{
    this->tipo = tipo;
}