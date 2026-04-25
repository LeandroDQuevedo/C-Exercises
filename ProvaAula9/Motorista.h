//Leandro de Quevedo Berwanger
#ifndef MOTORISTA_H
#define MOTORISTA_H
#include <iostream>
using namespace std;

class Motorista
{
private:
    string nome;
    string categoriaHabilitacao;
    double salarioLiquido;
    double salarioBruto;
    int qntdHorasTrabalhadasPSemana;
public:
    Motorista(string nome, string categoriaHabilitacao, double salarioLiquido, double salarioBruto, int qntdHorasTrabalhadasPSemana);
    string getNome();
    void setNome(string nome);
    string getCategoriaHabilitacao();
    void setCategoriaHabilitacao(double categoriaHabilitacao);
    double getSalarioLiquido();
    void setSalarioLiquido(double salarioLiquido);
    double getSalarioBruto();
    void setSalarioBruto(double salarioBruto);
    int getQntdHorasTrabalhadasPSemana();
    void setQtdHorasTrabalhadasPSemana(int qntdHorasTrabalhadasPSemana);
    bool excedeJornada();
    bool salarioIrregular();
    virtual string getInfoEspecifica();
    virtual void imprime_info();
};






#endif
