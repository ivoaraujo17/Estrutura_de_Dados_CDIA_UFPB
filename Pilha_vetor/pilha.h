#ifndef PILHA
#define PILHA

class Pilha
{
private:
    int* topo;
    int tam_vetor;
    int tam_atual;
public:
    Pilha(int n);
    void vazia();
    int cheia();
    int len();
    int top();
    void push(int valor);
    void pop();
    void display();
    ~Pilha();
};
#endif