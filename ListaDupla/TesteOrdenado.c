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
}

int main() {
    t_lista_dupla lista;
    inicia_lista(&lista);
    
    // Testando inserir_inicio
    inserir_inicio(5, &lista);
    Ordenar(&lista);
    exibir_lista(&lista, "Apos inserir 5");  // 5
    
    
    inserir_inicio(3, &lista);
    Ordenar(&lista);
    exibir_lista(&lista, "Apos inserir 3");  // 3->5
    
    
    inserir_inicio(7, &lista);
    Ordenar(&lista);
    exibir_lista(&lista, "Apos inserir 7");  // 3->5->7
    

    inserir_fim(4, &lista);
    Ordenar(&lista);
    exibir_lista(&lista, "Apos inserir 4");  // 3->4->5->7
    
    inserir_fim(2, &lista);
    Ordenar(&lista);
    exibir_lista(&lista, "Apos inserir 2");  // 2->3->4->5->7
    

    return 0;
}