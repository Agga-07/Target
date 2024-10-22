// Observe o trecho de código abaixo: int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA);
#include <stdio.h>
#include <string.h>

int contarA(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    int quant = contarA(str);
    printf("A letra 'a' aparece %d vez(es) na string.\n", quant);

    return 0;
}
