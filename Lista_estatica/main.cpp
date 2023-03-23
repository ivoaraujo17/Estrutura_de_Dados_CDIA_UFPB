#include <iostream>
#include "lista_estatica.h"

using namespace std;

int main(){
    cout << "\nCriando lista com 10 posicoes!";
    Lista lista(10);
    lista.display();
    cout << "\n\nVerificando se a lista esta vazia!";
    lista.vazia();
    cout << "\n\nAdicionando 18 na posicao 1";
    lista.add(1,18);
    lista.display();
    cout << "\nAdicionando 12 na posicao 2";
    lista.add(2,12);
    lista.display();
    cout << "\nAdicionando 8 na posicao 3";
    lista.add(3,8);
    lista.display();
    cout << "\n\nAdicionando 20 na posicao 2 para testar insercao em posicao preenchida";
    lista.add(2,20);
    lista.display();
    cout << "\n\nPreenhendo o resto da lista";
    lista.add(4,8);
    lista.add(5,6);
    lista.add(6,13);
    lista.add(7,12);
    lista.add(8,22);
    lista.add(9,19);
    lista.display();

    cout << "\n\nBuscanco elemento da posicao 4";
    cout << "\n" << lista.get(4) << endl;
    cout << "\nModificando elementos pos(1, 4,10), valor(30,40,50)";
    lista.modificar(1,30);
    lista.modificar(4, 40);
    lista.modificar(10, 50);
    lista.display();
    cout << "\nModificando em pos invalida (-1 e 11)";
    lista.modificar(-1, 100);
    lista.modificar(11, 200);

    cout << "\n\nVerificando se esta cheia!";
    cout << "\n" <<lista.cheia();
    
    
    cout << "\n\nRemovendo elementos";
    cout << "\nRemovendo o elemento da posicao 6";
    lista.remove(6);
    lista.display();
    cout << "\nRemovendo o elemento da posicao 1";
    lista.remove(1);
    lista.display();

    cout << "\n\nTestando tratativas de erro";
    cout << "\nTentando adicionar em posicao invalida";
    lista.add(10,10);
    cout << "\nTentando remove em posicao invalida";
    lista.remove(9);
    
    cout << "\n\nTamanho da lista";
    cout << "\n" << lista.len() << endl;
    
    system("pause");
    return 0;
}
