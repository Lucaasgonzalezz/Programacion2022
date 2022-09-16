#include "header.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    Producto p[20] ={{"13abc",500,23.50,"Producto para aromatizar el ambiente con sabor a lavanda"},
                    {"11abc",300,25.50,"Producto para aromatizar el ambiente con sabor a cafe"}};


    printf("Primero producto:%s\n Segundo producto:%s",p[0].codProd,p[1].codProd);
    ordenarSeleccion(p,2,sizeof (Producto), cmpProdCodProd);
    printf("Primero producto:%s \n Segundo producto: %s",p[0].codProd,p[1].codProd);

    return 0;
}
