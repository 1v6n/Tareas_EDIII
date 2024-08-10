#include <stdio.h>

void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    printf("Serie de Fibonacci: %d, %d", t1, t2);

    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main(void) {
    int n;

    printf("Ingrese el número de términos de la serie de Fibonacci: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("El número debe ser mayor o igual a 1.\n");
    } else {
        printFibonacci(n);
    }

    return 0;
}