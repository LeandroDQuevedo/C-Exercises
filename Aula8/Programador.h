#ifndef PROGRAMADOR_H
#define PROGRAMADOR_H
#include <iostream>
#include "Pessoa.h"

class Programador: public Pessoa
{
private:
    string linguagemProgramacao;
public:
    Programador(string nome, int idade, string linguagemProgramacao);
    string getLinguagemProgramacao();
    void setLinguagemProgramacao(string linguagemProgramacao);
};
#endif