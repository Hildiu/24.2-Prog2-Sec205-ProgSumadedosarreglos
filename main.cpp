/*--------------------------------------------------------------------
 * Dato de Entrada: no tiene
 * Dato de Salida : a1, a2 , aSuma (array de 15 casilleros cada uno)
 --------------------------------------------------------------------*/

#include "UFunciones.h"

int main()
{
  TEntero  a1[MAX];
  TEntero  a2[MAX];
  TEntero  aSuma[MAX];

  srand(time(nullptr));
  llenarDatos(a1, MAX);
  imprimirArreglo(a1, MAX);
  cout << "\n\n";
  llenarDatos(a2, MAX);
  imprimirArreglo(a2, MAX);
  cout << "\n\nArreglo suma \n";
  sumarArreglos(a1, a2, aSuma, MAX);
  imprimirArreglo(aSuma, MAX);
  return 0;
}
