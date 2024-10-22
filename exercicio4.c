#include <stdio.h>

int main() {
    // a) Números ímpares consecutivos
    int ultimo_impar = 7; // Último número da sequência
    int proximo_impar = ultimo_impar + 2; // Próximo número ímpar
    printf("a) Próximo elemento (números ímpares): %d\n", proximo_impar);

    // b) Potências de 2
    int ultimo_potencia_2 = 64; // Último número da sequência
    int proximo_potencia_2 = ultimo_potencia_2 * 2; // Próxima potência de 2
    printf("b) Próximo elemento (potências de 2): %d\n", proximo_potencia_2);

    // c) Quadrados perfeitos
    int proximo_quadrado_perfeito = 7 * 7; // Próximo quadrado perfeito (7^2)
    printf("c) Próximo elemento (quadrados perfeitos): %d\n", proximo_quadrado_perfeito);

    // d) Quadrados de números pares
    int proximo_quadrado_par = 10 * 10; // Próximo quadrado de número par (10^2)
    printf("d) Próximo elemento (quadrados de pares): %d\n", proximo_quadrado_par);

    // e) Sequência de Fibonacci
    int fib1 = 5, fib2 = 8; // Dois últimos números da sequência de Fibonacci
    int proximo_fibonacci = fib1 + fib2; // Próximo número na sequência
    printf("e) Próximo elemento (Fibonacci): %d\n", proximo_fibonacci);

    // f) Padrão misto
    int ultimo_padrão = 19; // Último número da sequência
    int proximo_padrao = ultimo_padrão + 1; // Próximo número na sequência
    printf("f) Próximo elemento (padrão misto): %d\n", proximo_padrao);

    return 0;
}
