#include "listaDupla.h"
int main() {
    t_lista_dupla lista;
    inicia_lista(&lista);
    
    enfileira(4, &lista);
    enfileira(3, &lista);
    enfileira(8, &lista);
    enfileira(1, &lista);
    enfileira(2, &lista);
    exibir_lista(&lista, "Lista original:");  
    remove_pares(&lista);
    exibir_lista(&lista, "Apos tirar os pares:");  
    
    return 0;
}