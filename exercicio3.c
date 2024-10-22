//3) Observe o trecho de código abaixo: int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA);

Ao final do processamento, qual será o valor da variável SOMA?
#include <stdio.h>

int main() {
    int INDICE = 12;
    int SOMA = 0;
    int K = 1;

    while (K < INDICE) {
        K = K + 1;  // Incrementa K
        SOMA = SOMA + K;  // Adiciona K à SOMA
    }

    printf("O valor de SOMA é: %d\n", SOMA);
    return 0;
}

//o valor de SOMA será 77
