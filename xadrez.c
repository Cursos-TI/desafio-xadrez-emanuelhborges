#include <stdio.h>
    // O objetivo é criar um único programa em C que simule o movimento de três peças: Torre, Bispo e Rainha.
    // Para cada peça, utilize uma estrutura de repetição diferente (for, while ou do-while) para simular seu movimento. 
    // O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça.
int main() {
    
    int casas_rainha = 8, casas_bispo = 5;
    
    // Com a variavel casas_torre decladada como sendo 0, essa linha de codigo ira adicionar 1 5 vezes, 
    //equivalente ao movimento da Torre, utilizando for, fazendo com que a Torre ande 5 casas para esquerda
    printf("Movimento da Torre (5 casas para a direita)\n");
    for (int casas_torre = 0; casas_torre < 5; casas_torre++) {
        printf("Direita\n");
    }
    // Com a variavel casas_bispo decladada como sendo 5, essa linha de codigo ira subtrair 1 5 vezes, 
    // equivalente ao movimento do Bispo, utilizando while, fazendo com que o Bispo ande 5 casas na diagonal
    printf("\nMovimento do Bispo (5 casas na diagonal)\n");
    while (casas_bispo > 0) {
        printf("Cima, Direita\n");
        casas_bispo--;
    }
    // Com a variavel casas_rainha decladada como sendo 8, essa linha de codigo ira subtrair 1 8 vezes, 
    // equivalente ao movimento da Rainha, utilizando do e while, fazendo com que a Rainha ande 8 casas pra esquerda
    printf("\nMovimento da Rainha (8 casas para a esquerda)\n");
    do {
        printf("Esquerda\n");
        casas_rainha--;
    } while (casas_rainha > 0);
    
    return 0;
}
