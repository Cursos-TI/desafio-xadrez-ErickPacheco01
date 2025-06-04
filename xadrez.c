#include <stdio.h>

int main(){

    int torre = 0, bispo = 0, rainha = 0;

    printf("\n***Iniciando o movimento da Torre***\n");

    // Vamos mover a torre para cima

    while (torre < 5)
    {
        printf("Cima\n"); // Imprimindo a direção do movimento

        torre ++;
    }
    
    printf("\n***Iniciando o movimento do Bispo***\n");

    // Vamos mover o bispo na diagonal direita 

    do
    {
        printf("Cima\n"); // Imprimindo a direção do movimento
        printf("direita\n"); // Imprimindo a direção do movimento

        bispo ++;
    } while (bispo < 5);
    
    printf("\n***Iniciando o movimento da Rainha***\n");

    // Vamos mover a rainha para esquerda 

    for (rainha; rainha < 8; rainha ++)
    {
        printf("Esquerda\n"); // Imprimindo a direção do movimento
    }
    
    
    return 0;
}