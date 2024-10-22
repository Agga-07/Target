//Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.


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
    printf("Informe uma string: ");
    fgets(str, sizeof(str), stdin);
    
    int quantidade = contarA(str);
    printf("A letra 'a' aparece %d vez(es) na string.\n", quantidade);

    return 0;
}
