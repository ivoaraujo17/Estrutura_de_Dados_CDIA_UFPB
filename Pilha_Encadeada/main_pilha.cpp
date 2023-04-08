#include <iostream>
#include "pilha.h"

using namespace std;

int main(){
    cout << "\nCriando Pilha!";
    Pilha Pilha;
    Pilha.display();
    cout << "\n\nVerificando se a Pilha esta vazia!";
    Pilha.vazia();
    cout << "\n\nEmpilhando 10 elementos";
    Pilha.push(1);
    Pilha.push(2);
    Pilha.push(3);
    Pilha.push(4);
    Pilha.push(5);
    Pilha.push(6);
    Pilha.push(7);
    Pilha.push(8);
    Pilha.push(9);
    Pilha.push(10);
    Pilha.display();

    cout << "\n\nempilhando mais 3 elemento";
    Pilha.push(20);
    Pilha.push(30);
    Pilha.push(40);
    Pilha.display();
  
    cout << "\n\nDesempilhando 2 elementos";
    Pilha.pop();
    Pilha.pop();
    Pilha.display();

    cout << "\n\nvalor do topo atual: ";
    cout << Pilha.top();
    
    cout << "\n\nTamanho da Pilha";
    cout << "\n" << Pilha.len() << endl;
    
    system("pause");
    return 0;
}