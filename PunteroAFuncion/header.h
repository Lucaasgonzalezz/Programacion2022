#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stddef.h>
#include <string.h>

typedef struct
{
    char*   codProd;
    int     stock;
    float   precio;
    char*   descripcion;
}Producto;


typedef int(*Cmp)(void* x1, void* x2);


void ordenarSeleccion(void* vec, int ce, size_t tamElem, Cmp cmp);
void* vecBuscarMenor(void *ini, void* ult, size_t tamElem, Cmp cmp);
void intercambiar(void* menor,void* i, size_t tamElem);
int cmpProdCodProd(void* p1, void* p2);

#endif // HEADER_H_INCLUDED
