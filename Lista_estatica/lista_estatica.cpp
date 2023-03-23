#include <iostream>
#include "lista_estatica.h"

using namespace std;

Lista::Lista(int n){
    tam_vetor = n;
    lista = new int[n];
    pos_valida = 1;
    for (int i = 0; i < n; i++) {
        lista[i] = 0;
    }
    cout << "lista criada!\n";
}

void Lista::vazia(){
    if (lista[0] == 0 and pos_valida == 1){
        cout << "\nLista vazia";          
    }
    else{
        cout << "\nLista nao vazia";
    }
}

int Lista::cheia(){
    if (pos_valida > tam_vetor){
        return 1;
    }
    else{
        return -1;
    }
}

int Lista::len(){
    return pos_valida - 1;
}

int Lista::get(int pos){
    if (pos > pos_valida or pos < 1)
    {
        cout << "\nPosicao invalida!";
        return -1;
    }
    else{
        return lista[pos-1];
    }
}

void Lista::modificar(int pos, int valor){
    if (pos < 1 or pos >= pos_valida){
        cout << "\nPosicao invalida!";
    }
    else{
        int pos_atual = 1;
        while (pos_atual != pos){
            pos_atual ++;
        }
        lista[pos_atual -1] = valor;
    }
}

void Lista::add(int pos, int valor){
    if(pos > pos_valida or pos < 1){
        cout << "\nErro, possicao invalida!";
    }
    else{
        if (cheia() == -1){
            for (int i = pos_valida-1; i > pos-1; i--){
                lista[i] = lista[i-1];
            }
            lista[pos - 1] = valor;
            pos_valida += 1;
        }
        else{
            cout << "\nErro, lista cheia!";
        }
    }
}

void Lista::remove(int pos){
    if(pos > pos_valida - 1 or pos < 1){
        cout << "\nErro, possicao invalida!";
    }
    else{
        for (int i = pos -1; i < pos_valida - 1; i++){
            lista[i] = lista[i+1];
        }
        pos_valida -= 1;
    } 
}

void Lista::display(){
    cout << "\n";
    for (int i = 0; i < (pos_valida - 1); i++){
        cout << "[" << lista[i] << "]";
    }
}

Lista::~Lista() {
    cout << "\nlista desalocada da memoria!";
    delete[] lista;
}
