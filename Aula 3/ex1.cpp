// 1. Escreva um programa que leia dados para uma matriz quadrada de inteiros. Ao final
// da leitura o programa, deverá ser impresso o número da linha que contém o menor
// dentre todos os valores lidos.

#include <iostream>
using namespace std;

int main() {
int Linhas = 3;
int Colunas = 3;
int valorsoma = 0;
int maior = 0;
    int matriz[3][3];

    for (size_t i = 0; i < Linhas; i++)
    {
        for (size_t j = 0; j < Colunas; j++)
        {
            cout << "Insera o número da coluna " << j+1 << " linha " << i+1 << ": ";
            cin >> matriz[i][j];
        }  
        if (valorsoma < matriz[i][0] + matriz[i][1] + matriz[i][2])
        {
            valorsoma = matriz[i][0] + matriz[i][1] + matriz[i][2];
            maior = i+1;
        }
    }
    
cout << "A maior linha é: \n" << maior << "ª" << endl;
return 0;
}