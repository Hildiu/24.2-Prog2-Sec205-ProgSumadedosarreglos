//
// Created by mbermejo on 19/09/2024.
//

#include "UFunciones.h"

void llenarDatos( TEntero  *pA  , TEntero n)
{
    for(int i=0; i<n; i++)
        pA[i] = rand() % 100 + 1;      //--- 0, 1, 2,...99
}

void  imprimirArreglo(TEntero *pA, TEntero n)
{
    for(int indice=0; indice<n; indice++)
        cout << setw(5) << pA[indice];
}


void   sumarArreglos(TEntero *pA1, TEntero  *pA2, TEntero *pSuma, TEntero n)
{
   for(int i=0; i<n; i++)
       pSuma[i] = pA1[i] + pA2[i];
}