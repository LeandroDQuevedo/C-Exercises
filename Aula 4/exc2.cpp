// 2. Crie uma classe chamada Pessoa. Uma pessoa possui nome, idade, altura, quantidade de irmãos e endereço. 
//Na classe Pessoa:
// • crie uma função chamada imprime_info, que imprime na tela as informações
// da pessoa, de maneira organizada.
// • crie uma função chamada is_filho_unico, que retorna verdadeiro caso a
// pessoa seja filha única e falso caso contrário.
// Na função main() faça o que se pede:
// • crie 3 pessoas informando todos os dados.
// • imprima as informações de todas as pessoas, de forma legível e organizada.
// • imprima na tela a frase “Filho(a) único(a)” para as pessoas que forem filhas
// únicas, e a frase “Não é filho(a) único(a)” para as pessoas que não forem filhas
// únicas.

#include <iostream>
#include <string>
using namespace std;

class Pessoa
{
public:
    Pessoa(string novoNome, int novaIdade, double novaAltura, int qntdIrmaos, string novoEndereco);
    void imprime_info();
    bool is_filho_unico();

private:
    string nome;
    int idade;
    double altura;
    int irmaos;
    string endereco;
};

Pessoa::Pessoa(string novoNome, int novaIdade, double novaAltura, int qntdIrmaos, string novoEndereco) {
    nome = novoNome;
    idade = novaIdade;
    altura = novaAltura;
    irmaos = qntdIrmaos;
    endereco = novoEndereco;
}

void Pessoa::imprime_info()
{
    cout 
    << "\nInformações\n---------------\nNome: " << Pessoa::nome 
    << "\nIdade: " << Pessoa::idade 
    << "\nAltura: " << Pessoa::altura 
    << "\nQuantidade de Irmãos: "<< Pessoa::irmaos
    << "\nEndereço: " << Pessoa:: endereco << endl;
}

bool Pessoa::is_filho_unico(){
    
    if (Pessoa::irmaos > 0)
        return true;
    else
        return false;
    
}

using namespace std;

int main()
{

    Pessoa Pessoa1 = Pessoa(
        "Roberto",
        15,
        1.55,
        1,
        "Rua Jão, 15");
    Pessoa Pessoa2 = Pessoa(
        "Vitor",
        32,
        1.90,
        0,
        "Frente da farmacia, 1923");
    Pessoa Pessoa3 = Pessoa(
        "Pedro",
        52,
        1.63,
        15,
        "Rua Unisisnos, 123");

    Pessoa1.imprime_info();
    Pessoa2.imprime_info();
    Pessoa3.imprime_info();


    cout << "Pessoa1: ";
    if (Pessoa1.is_filho_unico())
        cout << "Filho(a) único(a)" << endl;
    else
        cout << "Não é filho(a) único(a)" << endl;

    cout << "Pessoa2: ";
    if (Pessoa2.is_filho_unico())
        cout << "Filho(a) único(a)" << endl;
    else
        cout << "Não é filho(a) único(a)" << endl;

    cout << "Pessoa3: ";
    if (Pessoa3.is_filho_unico())
        cout << "Filho(a) único(a)" << endl;
    else
        cout << "Não é filho(a) único(a)" << endl;
    
    
    
    return 0;
}