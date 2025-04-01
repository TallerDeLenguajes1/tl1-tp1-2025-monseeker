#include <stdio.h>

int cuadrado(int num);
void cuadradoDeNum(int * num);
void mostrarDireccion(int num);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main(){
    int a=3, b=5;
    printf("El cuadrado de %d es: %d \n", a, cuadrado(a));
    printf("El cuadrado de %d es: ", b);
    cuadradoDeNum(&b);
    printf("%d \n", b);
    mostrarDireccion(a);
    printf("Antes de invertir: \na=%d, b=%d \n", a, b);
    invertir(&a, &b);
    printf("Despues de invertir: \na=%d, b=%d \n", a, b);
    printf("Antes de ordenar: \na=%d, b=%d \n", a, b);
    orden(&a, &b);
    printf("Despues de ordenar: \na=%d, b=%d \n", a, b);

    return 0;
}

int cuadrado(int num){
    return num*num;
}

void cuadradoDeNum(int * num){
    *num = (*num) * (*num);
}

void mostrarDireccion(int num){
    printf("Direccion de memoria de la variable: %p \n", &num);
    printf("Contenido de la variable: %d \n", num);
}

void invertir(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;   
}

void orden(int *a, int *b){
    if((*b)<(*a)){
        int aux = *a;
        *a = *b;
        *b = aux;  
    }
}