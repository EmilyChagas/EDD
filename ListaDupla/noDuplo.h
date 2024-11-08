#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int info;
    struct no * anterior, * proximo;
} t_no_duplo;

t_no_duplo * constroi_no (int);