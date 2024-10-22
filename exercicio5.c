//Passo a Passo:
//Ligue o Interruptor A e deixe por 5-10 minutos.

//Desligue o Interruptor A e ligue o Interruptor B.

//Vá até as lâmpadas:

//Lâmpada ligada: controla o Interruptor B.
//Lâmpada desligada e quente: controla o Interruptor A.
//Lâmpada desligada e fria: controla o Interruptor C.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int interruptorA = 0;
    int interruptorB = 0;
    int interruptorC = 0;
    
    srand(time(NULL));

    int lampada1 = rand() % 3;
    int lampada2 = rand() % 3;
    int lampada3 = rand() % 3;

    while (lampada1 == lampada2 || lampada1 == lampada3 || lampada2 == lampada3) {
        lampada2 = rand() % 3;
        lampada3 = rand() % 3;
    }

    interruptorA = 1;

    interruptorA = 0;
    interruptorB = 1;

    printf("Verificando as lâmpadas...\n");

    for (int i = 0; i < 3; i++) {
        int estado = (interruptorA && (lampada1 == i)) || (interruptorB && (lampada2 == i)) || (interruptorC && (lampada3 == i));
        
        if (estado) {
            printf("Lâmpada %d é controlada pelo Interruptor %c\n", i + 1, 'A' + lampada1);
        } else {
            printf("Lâmpada %d é controlada pelo Interruptor %c\n", i + 1, 'A' + lampada2);
        }
    }

    return 0;
}
