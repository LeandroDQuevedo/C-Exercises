// 3. Defina um contexto e crie uma classe com atributos e funções. Defina uma função
// main() para apresentar as informações do objeto na tela.

#include <iostream>
#include <string>
#define tamanhomochila 5
using namespace std;

class Personagem
{
public:
    Personagem(string novoNome, string novaClasse, int novoNivel, string novoItem[tamanhomochila], int novoVida);
    void uparDeNivel();
    void mostrarInventario();
    int alterarVida(int DanoOuCura);
    void lootear(string novoItem, int itemDescartado);

private:
    string nome;
    string classe;
    int nivel;
    string itens[tamanhomochila];
    int vida;
};

Personagem::Personagem(string novoNome, string novaClasse, int novoNivel, string novoItem[tamanhomochila], int novoVida) {
    string *p;
    *p = novoItem[0];
    nome = novoNome;
    classe = novaClasse;
    nivel = novoNivel;
    for (int i = 0; i < tamanhomochila; i++)
    {
        itens[tamanhomochila] = &p;
        p++;
    }
    vida = novoVida;
}

void Personagem::uparDeNivel()
{
    Personagem::nivel++;
    cout << "Upou para o nível" << Personagem::nivel << "!!!";
}

void Personagem::mostrarInventario()
{
    cout << "Mochila\n-------------------\n";
    for (size_t i = 0; i < tamanhomochila; i++)
    {
        cout << i << "°" << itens[i] << endl;
    }
    
}

int Personagem::alterarVida(int DanoOuCura){
    Personagem::vida += DanoOuCura;
    return Personagem::vida;
}

void Personagem::lootear(string novoItem, int itemDescartado){
    string aux;
    Personagem::itens[itemDescartado] = aux;
    Personagem::itens[itemDescartado] = novoItem;
    cout << "\nVocê descartou --" << aux << "-- e pegou {{" << Personagem::itens[itemDescartado] << "}}";
}


int main()
{
    Personagem Personagem1 = Personagem("Rudson", "Druida", 1, {"Espada boa", } )
    while (true)
    {
        int menu = 0;
        cout << "Bem vindo ao menu\n---------------------\n" 
        << "1 - Upar o Nível\n" 
        << "2 - Mostrar Inventário\n" 
        << "3 - Alterou a Vida\n" 
        << "4 - Lootear\n";
        
        cin >> menu;
        switch (menu)
        {
        case 1:
            Personagem::uparDeNivel();
            break;
        case 2:
            
        
        default:
            break;
        }
    }
    
    
    
    
    return 0;
}