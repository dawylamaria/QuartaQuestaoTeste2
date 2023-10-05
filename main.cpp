#include <iostream>

struct No {
    int data;
    No* next;
};

No* criarNo(int data) {
    No* novoNo = new No;
    novoNo -> data = data;
    novoNo -> next = NULL;
    return novoNo;
}

int buscaEmListaEncadeada(No* head, int valorBuscado) {
    No* atual = head;
    int indice = 0;

    while (atual != NULL) {
        if (atual -> data == valorBuscado) {
            return indice;
        }
        atual = atual -> next;
        indice++;
    }

    return -1; 
}

using namespace std;
void mostrarLista(No* head) {
    No* atual = head;
    while (atual != NULL) {
        cout << atual->data << " , ";
        atual = atual->next;
    }
    cout << "NULL" << endl;
}

int main() {
    No* lista = NULL;

    lista = criarNo(1);
    lista -> next = criarNo(2);
    lista -> next -> next = criarNo(3);
    lista -> next->next -> next = criarNo(4);
    lista -> next -> next -> next -> next = criarNo(5);
    
    cout << "Lista:" << endl;
    mostrarLista(lista);

    int valorBuscado = 4;
    int resultado = buscaEmListaEncadeada(lista, valorBuscado);

    if (resultado != -1) {
        cout << "Elemento encontrado no indice " << resultado << endl;
    } else {
        cout << "Elemento nao encontrado." << endl;
    }
	
	system("pause");
    return 0;
}

