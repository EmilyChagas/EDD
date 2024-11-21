#include "listaDupla.h"

void Ordenar(t_lista_dupla *l) {
    if (lista_vazia(l) || l->primeiro->proximo == NULL) {
        return;
    }

    for (t_no_duplo *i = l->primeiro; i != NULL; i = i->proximo) {
        for (t_no_duplo *j = i->proximo; j != NULL; j = j->proximo) {
            if (i->info > j->info) {
                int aux = i->info;
                i->info = j->info;
                j->info = aux;
            }
        }
    }

    t_no_duplo *aux = l->primeiro;
    while (aux->proximo != NULL) {
        aux = aux->proximo;
    }
    l->ultimo = aux;
}

int main() {
    t_lista_dupla lista;
    inicia_lista(&lista);
    
    // Testando inserir_inicio
    inserir_inicio(5, &lista);
  
    inserir_fim(3, &lista);
    Ordenar(&lista);
    exibir_lista(&lista,"Lista");

    inserir_inicio(6, &lista);
   
    inserir_fim(4, &lista);
    Ordenar(&lista);
    exibir_lista(&lista,"Lista");

    inserir_fim(2, &lista);

    exibir_lista(&lista,"Lista");
    Ordenar(&lista);
    exibir_lista(&lista, "Lista ordenada");  // 2->3->4->5->7
    

    return 0;
}