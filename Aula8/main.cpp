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
    // cout << bananananica.calcula_preco(5) << endl;
    // cout << bananananica.getPreco() << " - " << bananananica.getTipo() << endl;
    
    // //Melancias
    // cout << melanciafora.getPreco() << endl;
    // cout << melanciafora.calcula_preco(5) << endl;
    // cout << melanciafora.getPreco() << " - " << melanciafora.getEpoca() << endl;
    // cout << melanciafora.calcula_preco_final() << endl;

    // //Programador
    // programadorjava.imprime_dados(); 
    // cout << programadorjava.getLinguagemProgramacao();
    
    // programadorjava.setNome("Jobes");
    // programadorjava.setIdade(18);
    // programadorjava.setLinguagemProgramacao("Delphi");
    
    // programadorjava.imprime_dados(); 
    // cout << programadorjava.getLinguagemProgramacao();

    // //Aluno
    // alunoruim.imprime_dados(); 
    // cout << alunoruim.getNota();
    
    // alunoruim.setNome("Nilson");
    // alunoruim.setIdade(60);
    
    // alunoruim.imprime_dados(); 
    // cout << alunoruim.getNota();
    
    


    return 0;
}