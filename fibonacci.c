/*série de números em que cada termo subsequente é a soma dos dois anteriores, começando geralmente com 0 e 1*/

#include <stdio.h>

int fibonacci(int n) {

    if(n == 0) {
        return 0;
    }
    else if(n == 1) {
        return 1;
    }
    else {
        return(fibonacci(n - 1) + fibonacci(n - 2)); 
    }
}

int main() {

    int n;

    printf("Digite o valor da posição que você quer receber da sequencia de Fibonacci\n");
    scanf("%d", &n);

    int resultado = fibonacci(n);

    printf("%d\n", resultado);

}