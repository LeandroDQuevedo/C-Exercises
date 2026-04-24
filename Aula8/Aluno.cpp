#include <iostream>
#include "Pessoa.h"
#include "Aluno.h"

Aluno::Aluno(string nome, int idade, double nota):Pessoa(nome, idade)
{
    this->nota = nota;
}

double Aluno::getNota()
{
    return nota;
}

void Aluno::setNota(double nota)
{
    this->nota = nota;
}

void Aluno::imprime_dados()
{
    cout << "**Informações da Pessoa**" << endl
    << "Nome: " << getNome() << endl
    << "Idade: " << getIdade() << endl
    << "Nota: " << nota << endl;
}