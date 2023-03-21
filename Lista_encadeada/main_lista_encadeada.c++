#include <iostream>
#include "lista_encadeada.h"


using namespace std;
int main()
{
    Lista_encadeada lista;
    if (lista.vazia() == 1){
        cout << "Lista vazia\n";
    }
    cout << "\nAdicionando os valores 10, 20, 30 na lista\n";
    lista.add(1, 10);
    lista.add(2,20);
    lista.add(3,30);
    lista.display();
    cout << "\n------------------" << endl;
    cout << "Adicionando 5 na primeira posicao!\n";
    lista.add(1, 5);
    lista.display();
    cout << "\n------------------" << endl;
    cout << "Adicionando 50 na posicao 3\n";
    lista.add(3, 50);
    lista.display();
    cout << "\n------------------" << endl;
    cout << "Tamanho da lista: ";
    cout << lista.len() << endl;
    cout << "\n------------------" << endl;
    cout << "testando insercao em posicao invalida(-1 e 7)\n";
    lista.add(-1, 100);
    lista.add(7,80);
    system("pause");
    return 0;
}
