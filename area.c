#include <stdio.h>

int main () {
    printf("----- CALCULADOR DE AREA -----\n");
    
    int a, b, res;

    printf("Digite o primeiro numero: ");
    scanf_s("%d", &a);

    printf("Digite o segundo numero: ");
    scanf_s("%d", &b);

    res = a * b; 

    printf("A area calculada e: %d\n", res);

    return 0;
}