//Leandro de Quevedo Berwanger
#include "Urbano.h"


Urbano::Urbano(string nome, string categoriaHabilitacao, double salarioLiquido, double salarioBruto, int qntdHorasTrabalhadasPSemana, string numRegistro): 
Motorista(nome,categoriaHabilitacao,salarioLiquido,salarioBruto,qntdHorasTrabalhadasPSemana)
{
    this->numRegistro = numRegistro;
}
string Urbano::getNumRegistro()
{
    return numRegistro;
}
void Urbano::setNumRegistro(string numRegistro)
{
    this->numRegistro = numRegistro;
}
string Urbano::getInfoEspecifica()
{
    string retorno = "Número Registro: " + numRegistro;
    return retorno;
}
void Urbano::imprime_info()
{
    Motorista::imprime_info();
    cout << "Numero Registro: " << numRegistro << endl;
}