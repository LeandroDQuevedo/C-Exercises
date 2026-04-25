//Leandro de Quevedo Berwanger
#include "Rodoviario.h"


Rodoviario::Rodoviario(string nome, string categoriaHabilitacao, double salarioLiquido, double salarioBruto, int qntdHorasTrabalhadasPSemana, string nomeRota): 
Motorista(nome,categoriaHabilitacao,salarioLiquido,salarioBruto,qntdHorasTrabalhadasPSemana)
{
    this->nomeRota = nomeRota;
}
string Rodoviario::getNomeRota()
{
    return nomeRota;
}
void Rodoviario::setNomeRota(string nomeRota)
{
    this->nomeRota = nomeRota;
}
string Rodoviario::getInfoEspecifica()
{
    string retorno = "Rota: " + nomeRota;
    return retorno;
}
void Rodoviario::imprime_info()
{
    Motorista::imprime_info();
    cout << "Rota: " << nomeRota << endl;
}