#ifndef LISTA_H
#define LISTA_H

#include <iostream>

class Lista
{
private:
    int* lista;
    int tam_vetor;
    int pos_valida;
public:
    Lista(int n);
    void vazia();
    int cheia();
    int len();
    int get(int pos);
    void add(int pos, int valor);
    void remove(int pos);
    void display();
    ~Lista();
};
#endif
