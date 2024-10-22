//calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

#include <stdio.h>

int Fibonacci(int num) {
    int a = 0, b = 1, c = 0;
    
    if (num == a || num == b) {
        return 1; 
    }
    
    while (c < num) {
        c = a + b;
        a = b;
        b = c;
    }
    
    return c == num; 
}

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (pertenceFibonacci(num)) {
        printf("%d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}
