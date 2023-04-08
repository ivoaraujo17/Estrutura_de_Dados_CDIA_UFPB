#include <iostream>
#include "pilha.h"

using namespace std;

No::No(int v){
    valor = v;
    proximo_no = nullptr;
}
int No::get_valor(){
    return valor;
};
No* No::get_proximo_no(){
    return proximo_no;
}
void No::set_valor(int v){
    valor = v;
}
void No::set_ptr(No* ptr){
    proximo_no = ptr;
}

Pilha::Pilha(){
    cabeca = nullptr;
    tam_pilha = 0;
}

void Pilha::vazia(){
    if (tam_pilha == 0){
        cout << "Pilha vazia";
    }
    else{
        cout << "Pilha nao vazia";
    }
}

int Pilha::len(){
    return tam_pilha;
}

int Pilha::top(){
    if (tam_pilha == 0){
        return -1;
    }
    else{
        return cabeca->get_valor();
    }
}

void Pilha::push(int v){
    No* novo_no = new No(v);
    novo_no->set_ptr(cabeca);
    cabeca = novo_no;  
    tam_pilha += 1;
}

void Pilha::pop(){
    No* auxiliar = cabeca;
    cabeca = cabeca->get_proximo_no();
    delete auxiliar;
    tam_pilha -= 1;
}

void Pilha::display(){
    No* no_atual = cabeca;
    cout << "\n";
    for (int i = 1; i <= tam_pilha; i++){
        cout << " | " << no_atual->get_valor() << " | " << endl;
        no_atual = no_atual->get_proximo_no();
    }
}

Pilha::~Pilha(){
    No* no_atual = cabeca;
    No* next = nullptr;
    while (no_atual != nullptr) {
        next = no_atual->get_proximo_no();
        delete no_atual;
        no_atual = next;
    }
    cout << "\nNos deletado!";
}
