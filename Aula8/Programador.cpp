#include <iostream>
#include "Pessoa.h"
#include "Programador.h"

Programador::Programador(string nome, int idade, string linguagemProgramacao):Pessoa(nome, idade)
{
    this->linguagemProgramacao = linguagemProgramacao;
}
string Programador::getLinguagemProgramacao()
{
    return linguagemProgramacao;
}
void Programador::setLinguagemProgramacao(string linguagemProgramacao)
{
    this->linguagemProgramacao = linguagemProgramacao;
}
void Programador::imprime_dados()
{
    cout << "**Informações da Pessoa**" << endl
    << "Nome: " << getNome() << endl
    << "Idade: " << getIdade() << endl
    << "Nota: " << getLinguagemProgramacao() << endl;
}