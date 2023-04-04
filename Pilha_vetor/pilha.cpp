#include <iostream>
#include "pilha.h"

using namespace std;

Pilha::Pilha(int n){
    tam_vetor = n;
    tam_atual = 0;
    topo = new int[n];
    for (int i = 0; i < n; i++) {
        topo[i] = 0;
    }
    cout << "Pilha criada!\n";
}

void Pilha::vazia(){
    if (tam_atual == 0){
        cout << "\nPilha vazia";          
    }
    else{
        cout << "\nPilha nao vazia";
    }
}

int Pilha::cheia(){
    if (tam_atual + 1 > tam_vetor){
        return 1;
    }
    else{
        return -1;
    }
}

int Pilha::len(){
    return tam_atual;
}

int Pilha::top(){
    if (tam_atual == 0){
        return -1; // pilha vazia
    }
    else{
        return topo[tam_atual-1];
    }
}


void Pilha::push(int valor){
    if (cheia() == -1){
        topo[tam_atual] = valor;
        tam_atual += 1;
    }
    else{
        cout << "\nErro, Pilha cheia!";
    }
}

void Pilha::pop(){
    if (tam_atual == 0){
        cout << "lista vazia! impossivel remover!";
    }
    else{
        tam_atual -= 1;
    }
}

void Pilha::display(){
    cout << "\n";
    for (int i = tam_atual - 1; i >= (0); i--){
        cout << "[" << topo[i] << "]" << endl;
    }
}

Pilha::~Pilha() {
    cout << "\nPilha desalocada da memoria!";
    delete[] topo;
}