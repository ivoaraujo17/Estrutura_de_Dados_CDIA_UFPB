#include <iostream>
#include "lista_encadeada.h"

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

Lista_encadeada::Lista_encadeada(){
    cabeca = nullptr;
    tam_lista = 0;
}

int Lista_encadeada::vazia(){
    if (tam_lista == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int Lista_encadeada::len(){
    return tam_lista;
}

int Lista_encadeada::get(int pos){
    if (tam_lista == 0){
        return -1;
    }
    else{
        No* no_atual = cabeca;
        for (int i = 1; i < pos; i++){
            no_atual = no_atual->get_proximo_no();
        }
        return no_atual->get_valor();
    }
}

void Lista_encadeada::add_inicio(int valor){
    No* novo_no = new No(valor);
    novo_no->set_ptr(cabeca);
    cabeca = novo_no;  
    tam_lista += 1;
}

void Lista_encadeada::add_final(int valor){

    No* novo_no = new No(valor);
    No* no_atual = cabeca;
    while (no_atual->get_proximo_no() != nullptr)
    {
        no_atual = no_atual->get_proximo_no();
    }
    no_atual->set_ptr(novo_no);
    tam_lista += 1;
}

void Lista_encadeada::add(int p, int v){
    if (p==1){
        add_inicio(v);
    }
    else if (p==(tam_lista+1)){
        add_final(v);
    }
    else if (p > tam_lista+1){
        cout << "\nPosicao invalida\n";
    }
}


void Lista_encadeada::display(){
    No* no_atual = cabeca;
    for (int i = 1; i <= tam_lista; i++){
        cout << no_atual->get_valor() << " | ";
        no_atual = no_atual->get_proximo_no();
    }
}


Lista_encadeada::~Lista_encadeada(){
    No* no_atual = cabeca;
    No* next = nullptr;
    while (no_atual != nullptr) {
        next = no_atual->get_proximo_no();
        delete no_atual;
        no_atual = next;
    }
    cout << "\nNos deletado!";
}
