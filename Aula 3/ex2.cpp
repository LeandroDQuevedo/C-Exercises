// 2. Escreva um programa que apresenta a seguinte saída, perguntando ao usuário o
// número máximo (no exemplo, 9). Este número deve ser sempre ímpar.
// 1 2 3 4 5 6 7 8 9
// 2 3 4 5 6 7 8
// 3 4 5 6 7
// 4 5 6
// 5

#include <iostream>
using namespace std;

int main() {
int valormax = 0;

    cout << "Insira o n° máximo:";
    cin >> valormax;

int arrayprint[valormax];

    for (size_t i = 0; i < valormax; i++)
    {
        arrayprint[i] = i+1;
    }

int linhasdeprint = (valormax/2) + 1;
int numerosdeprint = valormax;
int posicao = 0;
    for (size_t i = 0; i < linhasdeprint; i++)
    {
        for (int x = 0; x < posicao; x++)
        {
            cout << "  ";
        }
        
        for (size_t j = posicao; j < numerosdeprint; j++)
        {
           cout << j+1 << " ";
        }
        posicao = i+1;
        numerosdeprint--;
        cout << endl;
    }
    
return 0;
}