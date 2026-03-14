// 4. Escreva um programa que leia uma matriz M de tamanho 6x6 e um valor A.
// Multiplique os elementos da matriz M pelo valor A armazenando o resultado das
// multiplicações em um vetor V de tamanho 36. Imprima na tela os valores
// armazenados em V.

#include <iostream>
using namespace std;


int main() {
int colunas = 6;
int linhas = 6;
int A = 0;
int V[36];
int posicao = 0;

int M[linhas][colunas];

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "Digite o numero da linha " << i+1 << " coluna " << j+1 << ": ";
            cin >> M[i][j];
        }
    }

    cout << "Digite o valor A:";
    cin >> A;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            V[posicao] = M[i][j] * A;
            posicao++;
        }
    }
    cout << "Vetor:";
    for (int i = 0; i < 36; i++)
    {
        if (i == 35)
        {
            cout << V[i] << ". ";
            return 0;
        }
        
        cout << V[i] << ", ";
    }
    

    
return 0;
}