#include "Banana.h"
#include "Melancia.h"
#include "Programador.h"
#include "Aluno.h"
#include <iostream>
using namespace std;


int main()
{
    
    Banana bananananica = Banana(1.5, "Banana Nanica");
    Melancia melanciafora = Melancia(20, 10, false);
    Programador programadorjava = Programador("Willson", 45, "java");
    Aluno alunoruim = Aluno("Lucas", 18, 3.6);

    //Banana
    cout << bananananica.getPreco() << endl;
    cout << bananananica.calcula_preco(5) << endl;
    cout << bananananica.getPreco() << " - " << bananananica.getTipo() << endl;
    
    //Melancias
    cout << melanciafora.getPreco() << endl;
    cout << melanciafora.calcula_preco(5) << endl;
    cout << melanciafora.getPreco() << " - " << melanciafora.getEpoca() << endl;
    cout << melanciafora.calcula_preco_final() << endl;

    //Programador
    programadorjava.imprime_dados(); 
    cout << programadorjava.getLinguagemProgramacao() << endl;
    
    programadorjava.setNome("Jobes");
    programadorjava.setIdade(18);
    programadorjava.setLinguagemProgramacao("Delphi");
    
    programadorjava.imprime_dados(); 
    cout << programadorjava.getLinguagemProgramacao() << endl;

    //Aluno
    alunoruim.imprime_dados(); 
    cout << alunoruim.getNota() << endl;
    
    alunoruim.setNome("Nilson");
    alunoruim.setIdade(60);
    
    alunoruim.imprime_dados(); 
    cout << alunoruim.getNota() << endl;
    
    
    // Criacao de pessoa ** POLIMORFISMO

    string nome, lingprog;
    int idade, menu;
    double nota;

    Pessoa* p;

    cout << "--Vamos criar a sua pessoa--" << endl;
    cout << "Nome: ";
    cin >> nome;
    cout << endl << "Idade: ";
    cin >> idade;
    cout << "Sua pessoa é Programador(1) ou Aluno(2)" << endl;
    cin >> menu;
    switch (menu)
    {
    case 1:
        cout << "Qual o a linguagem do Programador?";
        cin >> lingprog;
        p = new Programador(nome,idade,lingprog);
        p->imprime_dados();
        break;
    case 2:
        cout << "Qual o a nota?";
        cin >> nota;
        p = new Aluno(nome,idade,nota);
        p->imprime_dados();
        break;
    default:
        break;
    }



    return 0;
}