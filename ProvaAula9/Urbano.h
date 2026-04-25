//Leandro de Quevedo Berwanger
#ifndef URBANO_H
#define URBANO_H
#include "Motorista.h"
using namespace std;

class Urbano: public Motorista
{
    private:
        string numRegistro;
    public:
        Urbano(string nome, string categoriaHabilitacao, double salarioLiquido, double salarioBruto, int qntdHorasTrabalhadasPSemana, string numRegistro);
        string getNumRegistro();
        void setNumRegistro(string numRegistro);
        string getInfoEspecifica();
        void imprime_info();
};

#endif
