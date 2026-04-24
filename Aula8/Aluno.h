#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>
#include "Pessoa.h"

class Aluno: public Pessoa
{
private:
    double nota;
public:
    Aluno(string nome, int idade, double nota);
    double getNota();
    void setNota(double nota);
    virtual void imprime_dados();
};
#endif