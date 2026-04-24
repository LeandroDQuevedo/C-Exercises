#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
using namespace std;
class Pessoa
{
private:
    string nome;
    int idade;
public:
    Pessoa(string nome, int idade);
    string getNome();
    int getIdade();
    void setNome(string nome);
    void setIdade(int idade);
    virtual void imprime_dados();
};
#endif