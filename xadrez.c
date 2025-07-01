#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita! \n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda! \n");
        moverRainha(casas - 1);
    }
}

void moverBispo(int bispo, int h) {
    h = 5;
    while (h--) {
        for (bispo = 0; bispo < 1; bispo++){
            printf("Cima, ");
        }
        printf("Direita! \n");
    }
}

int main() {
    int i, z, bispo, h, cav;

    printf("A torre se movimentou para: \n");
    moverTorre(5); // Define quantas casas a torre vai andar!

    printf("\n"); // Pula uma linha.

    printf("A rainha se movimentou para: \n");
    moverRainha(8); // Define quantas casas a Rainha vai andar!
    
    printf("\n"); // Pula uma linha.

    printf("O bispo se movimentou para: \n");
    moverBispo(h, bispo); // chama a funçao.
    
    printf("\n"); // Pula uma linha.
    
    printf("O cavalo se movimentou para: \n");
    h = 1;
    while (h--) {
        for (cav = 0; cav < 2; cav++){
            printf("Cima! \n");
        }
        printf("Direita! \n");
    }
     
    return 0;
}