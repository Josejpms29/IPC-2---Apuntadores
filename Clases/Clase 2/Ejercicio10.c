#include <stdio.h>



int main() {
    
    int a = 10, b = 15;
    int *const ptr = &a;
    *ptr = 3; // válido - cambiar el valor
    ptr = &b; // No válido - cambiar la dirección de memoria
    
    return 0;
}