#include <stdio.h>

//Referenciacion: Es la obtencion de la dirección de una variable

int main() {
    int value = 28;
    int *ptr_1, *ptr_2;
    ptr_1 = &value;
    ptr_2 = ptr_1;
    
    printf("La dirección de memoria de ptr_2 = %p", &ptr_2);
    return 0;
}