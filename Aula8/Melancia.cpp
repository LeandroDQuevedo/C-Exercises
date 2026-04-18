#include <iostream>
#include "Fruta.h"
#include "Melancia.h"

Melancia::Melancia(double preco, double precoAdicional, bool epoca):Fruta(preco)
{
    this->precoAdicional = precoAdicional;
    this->epoca = epoca;
}

double Melancia::getPrecoAdicional()
{
    return precoAdicional;
}

void Melancia::setPrecoAdicional(double precoadicional)
{
    this->precoAdicional = precoAdicional;
}

bool Melancia::getEpoca()
{
    return epoca;
}

void Melancia::setEpoca(bool epoca)
{
    this->epoca = epoca;
}

double Melancia::calcula_preco_final()
{
    if (not epoca)
        return getPreco() + precoAdicional;
    else
        return getPreco();
    
}