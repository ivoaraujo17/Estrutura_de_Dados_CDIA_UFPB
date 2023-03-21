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

class Lista_encadeada{
    private:
    No* cabeca;
    int tam_lista;

    void add_final(int valor);
    void add_inicio(int valor);
    void add_meio(int pos, int valor);
    void remove_meio_final(int pos);
    void remove_inicio();

    public:
        Lista_encadeada();
        int vazia();
        int len();
        int get(int pos);
        void add(int pos, int valor);
        void remove(int pos);
        void display();
        ~Lista_encadeada();
};

#endif
