#include <iostream>

using namespace std;

class Lista
{
private:
    int* lista;
    int tam_vetor;
    int pos_valida;
public:
    Lista(int n) {
        tam_vetor = n;
        lista = new int[n];
        pos_valida = 1;
        for (int i = 0; i < n; i++) {
            lista[i] = 0;
        }
        cout << "lista criada!\n";
    }

    void vazia(){
        if (lista[0] == 0 and pos_valida == 1){
            cout << "\nLista vazia";          
        }
        else{
            cout << "\nLista nao vazia";
        }
    }

    void cheia(){
        if (pos_valida - 1 > tam_vetor){
            cout << "\nLista cheia!";
        }
        else{
            cout << "\nLista nao cheia!";
        }
    }

    int len(){
        return pos_valida - 1;
    }

    int get(int pos){
        if (pos > pos_valida or pos < 1)
        {
            cout << "\nPosicao invalida!";
        }
        else{
            return lista[pos-1];
        }
    }

    void add(int pos, int valor){
        if(pos > pos_valida or pos < 1){
            cout << "\nErro, possicao invalida!";
        }
        else{
            for (int i = pos_valida-1; i > pos-1; i--){
                lista[i] = lista[i-1];
            }
            lista[pos - 1] = valor;
            pos_valida += 1;
        }
    }

    void remove(int pos){
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

    void display(){
        cout << "\n";
        for (int i = 0; i < (pos_valida - 1); i++){
            cout << "[" << lista[i] << "]";
        }
    }
    
    ~Lista() {
        cout << "\nlista desalocada da memoria!";
        delete[] lista;
    }
};

int main(){
    Lista lista(10);
    lista.vazia();
    lista.add(1,1);
    lista.add(2,2);
    lista.add(3,3);
    lista.add(4,4);
    lista.add(5,5);
    lista.add(6,6);
    lista.display();

    lista.add(3,10);
    lista.display();

    lista.add(9,20);
    lista.display();

    lista.remove(3);
    lista.display();

    lista.remove(7);
    lista.display();
    
    lista.cheia();

    cout << "\n" << lista.len();

    cout << "\n" << lista.get(4);
}
