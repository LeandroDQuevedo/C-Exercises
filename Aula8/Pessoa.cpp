#include <iostream>
#include "Pessoa.h"

Pessoa::Pessoa(string nome, int idade)
{
    this->nome = nome;
    this->idade = idade;
}

string Pessoa::getNome()
{
    return nome;
}

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

int Pessoa::getIdade()
{
    return idade;
}

void Pessoa::setIdade(int idade)
{
    this->idade = idade;
}

void Pessoa::imprime_dados()
{
    cout << "**Informações da Pessoa**" << endl
    << "Nome: " << nome << endl
    << "Idade: " << idade << endl;
}