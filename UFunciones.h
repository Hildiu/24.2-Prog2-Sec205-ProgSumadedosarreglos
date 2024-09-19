//
// Created by mbermejo on 19/09/2024.
//

#ifndef INC_01_PROYECTO_UFUNCIONES_H
#define INC_01_PROYECTO_UFUNCIONES_H

#include <iostream>
#include <iomanip>
using namespace std;

typedef int TEntero;    //--- tipo de dato generico
const int MAX=15;     //--- es una constante

void llenarDatos( TEntero  *pA  , TEntero n);
void  imprimirArreglo(TEntero *pA, TEntero n);
void   sumarArreglos(TEntero *pA1, TEntero  *pA2, TEntero *pSuma, TEntero n);


#endif //INC_01_PROYECTO_UFUNCIONES_H
