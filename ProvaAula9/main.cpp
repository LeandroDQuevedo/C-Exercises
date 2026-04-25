//Leandro de Quevedo Berwanger
#include <iostream>
#include "Motorista.h"
#include "Urbano.h"
#include "Rodoviario.h"

using namespace std;

int main(){
    int qntdMotoristas = 5;
    Motorista* arrayMotoristas[qntdMotoristas];

    //O nome não aceita " " espaçoes em branco entre o nome e sobrenome :(
    for (int i = 0; i < qntdMotoristas; i++)
    {
        string nome, categoriaHabilitacao, numRegistro, nomeRota;
        int qntdHorasTrabalhadasPSemana = 0;
        double salarioLiquido = 0;
        double salarioBruto = 0;

        cout << "Motorista **" << i+1 << "**" << endl
        << "Nome: " << endl;
        cin >> nome;
        cout << "Categoria Habilitacao: " << endl;
        cin >> categoriaHabilitacao;
        cout << "Salario Bruto: " << endl;
        cin >> salarioBruto;
        cout << "Salario Liquido: " << endl;
        cin >> salarioLiquido;
        cout << "Quantidade de Horas Trabalhadas por Semana: " << endl;
        cin >> qntdHorasTrabalhadasPSemana; 
        if (categoriaHabilitacao == "D")
        {
            cout << "Registro na empresa de transporte: " << endl;
            cin >> numRegistro;
            arrayMotoristas[i] = new Urbano(nome,categoriaHabilitacao,salarioLiquido,salarioBruto,qntdHorasTrabalhadasPSemana,numRegistro);
        }
        else
        {
            cout << "Nome da rota (trecho): " << endl;
            cin >> nomeRota;
            arrayMotoristas[i] = new Rodoviario(nome,categoriaHabilitacao,salarioLiquido,salarioBruto,qntdHorasTrabalhadasPSemana,nomeRota);
        }
    }


    //Imprime info dos 5 motoristas
    for (int i = 0; i < qntdMotoristas; i++)
        {
            arrayMotoristas[i]->imprime_info();
        }
    for (int i = 0; i < qntdMotoristas; i++)
        {
            if (arrayMotoristas[i]->excedeJornada() || arrayMotoristas[i]->salarioIrregular())
            {
                cout << endl << "**Motorista IRREGULAR!!**" << endl 
                //Retorna nome do motorista
                << "Nome: " << arrayMotoristas[i]->getNome() << endl 
                //Retorna categoria da habilitação
                << "Categoria: " << arrayMotoristas[i]->getCategoriaHabilitacao() << endl
                //Retorna característica específica da classe
                << arrayMotoristas[i]->getInfoEspecifica() << endl;

                if (arrayMotoristas[i]->excedeJornada())
                {
                    cout << "Excede Jornada!" << endl;
                }

                if (arrayMotoristas[i]->salarioIrregular())
                {
                    cout << "Salário Irregular!" << endl;
                }
            }    
        }
    
    
}