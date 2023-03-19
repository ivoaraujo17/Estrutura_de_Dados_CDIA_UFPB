#include <iostream>
#include "lista_encadeada.h"


using namespace std;
int main()
{
    Lista_encadeada lista;
    if (lista.vazia() == 1){
        cout << "Lista vazia\n";
    }
    lista.add(1, 10);
    lista.display();
    cout << "\n------------------" << endl;
    lista.add(2,20);
    lista.display();
    cout << "\n------------------" << endl;
    lista.add(3,30);
    lista.display();
    cout << "\n------------------" << endl;
    lista.add(1, 5);
    lista.display();
    cout << "\n------------------" << endl;
    cout << lista.len() << endl;
    system("pause");
    return 0;
}
