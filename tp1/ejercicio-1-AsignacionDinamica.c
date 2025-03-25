/*e) Declare un puntero en el procedimiento principal que apunte a una
variable de algún tipo y muestre por pantalla lo siguiente:
1) El contenido del puntero
2) La dirección de memoria almacenada por el puntero.
3) la dirección de memoria de la variable.
4) la dirección de memoria del puntero.
5) el tamaño de memoria utilizado por esa variable usando la
función sizeof()*/

#include <stdio.h>
#include <stdlib.h>
int main () {

// 1 - Crear Puntero
    int a;
    printf("Ingrese un numero entero: ");
    scanf("%d", &a);

    int * puntero = malloc(sizeof(int)*a);
    puntero = &a;
// 2 - Contenido del puntero
printf("Contenido del puntero: %d\n", *puntero);

// 3 - Direccion de memoria almacenada por el puntero
printf("Direccion de memoria almacenada por el puntero: %p\n", &puntero);

// 4 - Direccion de memoria de la variable
printf("Direccion de memoria de la variable: %p\n", &a);

// 5 - Direccion de memoria del puntero
printf("Direccion de memoria del puntero: %p\n", &puntero);





return 0;
}

