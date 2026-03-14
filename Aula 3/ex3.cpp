// 3. Crie uma função capaz de somar os elementos das linhas L1 e L2 de uma matriz. O
// resultado deve ser colocado na linha L2. Faça o mesmo com a multiplicação.

#include <iostream>
using namespace std;

void somamatriz(int x[][2], int linhas, int colunas){
    int aux = 0;
    for (int i = 0; i < colunas; i++)
    {
        aux = x[0][i] + x[1][i];
        x[1][i] = aux;
        aux = 0;
    }
}
void multmatriz(int x[][2], int linhas, int colunas){
    int aux = 0;
    for (int i = 0; i < colunas; i++)
    {
        aux = x[0][i] * x[1][i];
        x[1][i] = aux;
        aux = 0;
    }
}



int main() {
int colunas = 2;
int linhas = 2;

int matriz[2][2] = 
{
    2,2,
    5,5
};

somamatriz(matriz,linhas,colunas);
cout << "Somando as L1 e L2:" << endl;

for (int i = 0; i < colunas; i++)
{
    for (int j = 0; j < linhas; j++)
    {
        cout << matriz[i][j] << " ";
    }
    cout << endl;
}

multmatriz(matriz,linhas,colunas);

cout << "Multiplicando as L1 e L2:" << endl;
for (int i = 0; i < colunas; i++)
{
    for (int j = 0; j < linhas; j++)
    {
        cout << right << matriz[i][j] << " ";
    }
    cout << endl;
}



    
return 0;
}