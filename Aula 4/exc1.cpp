// 1. Crie uma classe chamada Retângulo. Um retângulo possui uma base e uma altura.
// Crie as funções necessárias para que o usuário possa obter informações sobre a
// base, a altura e a área do retângulo

#include <iostream>

class Retangulo
{
public:
    Retangulo(double novoBase, double novoAltura);
    double getBase();
    double getAltura();

private:
    double altura;
    double base;
};

Retangulo::Retangulo(double novoBase, double novoAltura) {
    base = novoBase;
    altura = novoAltura;
}

double Retangulo::getBase()
{
    return base;
}
double Retangulo::getAltura()
{
    return altura;
}

double calculaArea(double x, double y)
{
    double area = x * y;

    return area;
}

using namespace std;

int main()
{

    Retangulo r1 = Retangulo(3.5,2);

    cout << "Valor da base: " << r1.getAltura() << "\nValor da altura: " << r1.getBase() << "\nValor da área: " << calculaArea(r1.getAltura(), r1.getBase());

    return 0;
}