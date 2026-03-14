// 5. Escreva um programa que leia uma matriz de tamanho 20x20 e um valor inteiro
// qualquer. O programa deverá fazer uma busca por esse valor na matriz e, ao final,
// escrever sua localização (linha e coluna) na matriz ou a mensagem de “Valor não
// encontrado”.

#include <iostream>
using namespace std;


int main() {
int colunas = 20;
int linhas = 20;
int aux = 1;
int valorprocurado = 0;

int M[linhas][colunas];

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            M[i][j] = aux;
            aux++;
        }
    }

    cout << "Digite o valor a ser procurado:";
    cin >> valorprocurado;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (valorprocurado == M[i][j])
            {
                cout << "Valor encontrado na linha [" << i+1 << "] coluna [" << j+1 << "]" << endl;
                ;
                return 0;
            }
            
        }
    }

    cout << "Valor não encontrado";

    
return 0;
}