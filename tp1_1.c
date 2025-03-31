#include <stdio.h>

int main(){
    int a = 3;
    int * punt = &a;

    printf("Hola mundo \n");

    printf("Contenido del puntero: %d \n", *punt);
    printf("Direccion de memoria almacenada: %p \n", punt);
    printf("Direccion de memoria de la variable: %p \n", &a);
    printf("Direccion de memoria del puntero: %p \n", &punt);
    printf("Tamanio de la variable: %lu", sizeof(a));
    return 0;
}