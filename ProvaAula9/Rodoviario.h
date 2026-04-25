//Leandro de Quevedo Berwanger
#ifndef RODOVIARIO_H
#define RODOVIARIO_H
#include "Motorista.h"
using namespace std;

class Rodoviario: public Motorista
{
    private:
        string nomeRota;
    public:
        Rodoviario(string nome, string categoriaHabilitacao, double salarioLiquido, double salarioBruto, int qntdHorasTrabalhadasPSemana, string nomeRota);
        string getNomeRota();
        void setNomeRota(string nomeRota);
        string getInfoEspecifica();
        void imprime_info();
};

#endif
