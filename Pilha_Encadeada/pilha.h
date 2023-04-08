#ifndef LISTA_H
#define LISTA_H

class No{
    private:
        int valor;
        No* proximo_no;
    public:
        No(int v);
        int get_valor();
        No* get_proximo_no();
        void set_valor(int valor);
        void set_ptr(No*);
};

class Pilha{
    private:
    No* cabeca;
    int tam_pilha;
    public:
        Pilha();
        void vazia();
        int len();
        int top();
        void push(int valor);
        void pop();
        void display();
        ~Pilha();
};

#endif