#include "header.h"

void ordenarSeleccion(void* vec, int ce, size_t tamElem, Cmp cmp)
{
    void* i;
    void* menor;
    void* ult = vec + (ce-1)*tamElem;

    for( i = vec ; i < ult ; i += tamElem)
    {
        menor = vecBuscarMenor( i, ult, tamElem, cmp);
        if( menor != i)
        {
            intercambiar( menor, i, tamElem);
        }
    }
}

void* vecBuscarMenor(void* ini, void* ult, size_t tamElem, Cmp cmp)
{
    void* menor = ini;

    for( void* i = ini + tamElem ; i <= ult ; i += tamElem)
    {
        if(cmp( i, menor) < 0)
            i = menor;
    }

    return menor;
}

void intercambiar( void* x1, void* x2, size_t tamElem)
{
    void* aux;
    *aux = *x1;
    *x1 = *x2 ;
    *x2 = *aux;
}

int cmpProdCodProd(void* x1, void* x2)
{
    Producto* p1 = (Producto*)x1;
    Producto* p2 = (Producto*)x2;

    return strcmp(p1->codProd,p2->codProd) ;
}
