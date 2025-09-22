#include <stdio.h>
// Problema: Definir a multiplicação de dois números inteiros não negativos m e n, em termos de operação de adição.

int multiplicacao(int m, int n) {

    if(n == 0) {
        return 0;
    }

    else {
        return m + multiplicacao(m, n - 1);
    }

}

int main() {

    int m, n, resultado;
    m = 5;
    n = 4;

    resultado = multiplicacao(m, n);
    printf("%d\n", resultado);

}