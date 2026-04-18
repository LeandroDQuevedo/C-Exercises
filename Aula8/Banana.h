#ifndef BANANA_H
#define BANANA_H
#include <iostream>
#include "Fruta.h"

using namespace std;

class Banana : public Fruta
{
private:
    string tipo;
public:
    Banana(double preco, string tipo);
    string getTipo();
    void setTipo(string tipo);
};
#endif