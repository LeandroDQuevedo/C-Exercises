//Leandro de Quevedo Berwanger

#include "Motorista.h"
using namespace std;
Motorista::Motorista(string nome, string categoriaHabilitacao, double salarioLiquido, double salarioBruto, int qntdHorasTrabalhadasPSemana)
{
    this->nome = nome;
    this->categoriaHabilitacao = categoriaHabilitacao;
    this->salarioLiquido = salarioLiquido;
    this->salarioBruto = salarioBruto;
    this->qntdHorasTrabalhadasPSemana = qntdHorasTrabalhadasPSemana;
}
string Motorista::getNome()
{
    return nome;
}
void Motorista::setNome(string nome)
{
    this->nome = nome;
}
string Motorista::getCategoriaHabilitacao()
{
    return categoriaHabilitacao;
}
void Motorista::setCategoriaHabilitacao(double categoriaHabilitacao)
{
    this->categoriaHabilitacao = categoriaHabilitacao;
}
double Motorista::getSalarioLiquido()
{
    return salarioLiquido;
}
void Motorista::setSalarioLiquido(double salarioLiquido)
{
    this->salarioLiquido = salarioLiquido;
}
double Motorista::getSalarioBruto()
{
    return salarioBruto;
}
void Motorista::setSalarioBruto(double salarioBruto)
{
    this->salarioBruto = salarioBruto;
}
int Motorista::getQntdHorasTrabalhadasPSemana()
{
    return qntdHorasTrabalhadasPSemana;
}
void Motorista::setQtdHorasTrabalhadasPSemana(int qntdHorasTrabalhadasPSemana)
{
    this->qntdHorasTrabalhadasPSemana = qntdHorasTrabalhadasPSemana;
}

bool Motorista::excedeJornada()
{
    //TRUE = execedeu | FALSE = nao execedeu
    if (qntdHorasTrabalhadasPSemana > 44)
        return true;
    else    
        return false;
    
}
bool Motorista::salarioIrregular()
{
    //TRUE = abusivo | FALSE = nao abusivo
    if (salarioLiquido < 0.7*salarioBruto)
        return true;
    else
        return false;
    
}
string Motorista::getInfoEspecifica()
{

    return "";
}
void Motorista::imprime_info()
{
    cout << "**Informacoes do motorista**" << endl
    << "Nome: " << nome << endl
    << "Categoria Habilitacao: " << categoriaHabilitacao << endl
    << "Salario Liquido: " << salarioLiquido << endl
    << "Salario Bruto: " << salarioBruto << endl
    << "Quantidade de Horas Trabalhadas por Semana: " << qntdHorasTrabalhadasPSemana << endl;
}