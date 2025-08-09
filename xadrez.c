#include <stdio.h>

/* 
O jogo está em fase inicial e por enquanto deve fazer a movimentação das tres peças abaixo:

Torre: Movendo 05 casas para direita
Bispo: movendo 05 casas na diagonal
rainha: movendo 08 casas a esquerda 
*/

int main () {

    int movtorre = 0, movbispo1 = 0, movbispo2 = 0, movrainha = 8;


printf("Bem vindo ao teste de xadrez!\n"); // tela de bem vindo
printf("A movimentação das peças será automatica\n"); //explicação do teste
printf("pois ainda estamos em fase de teste!\n\n");

//movimentação das peças

printf("MOVIMENTAÇÃO DA TORRE:\n");

 while (movtorre <= 5) {  // while deve conter uma condição que caso seja falsa interrompe a repetição do codigo
        if (movtorre > 0) { 
            printf("Direita!\n");
        }
        movtorre++; // variavel para evitar loop infinito no codigo
    }
    printf("\n"); // linha de separação

    //a partir daqui esta o comando de movimentação do bispo

    printf("MOVIMENTAÇÃO DO BISPO:\n");

    do {   //executa o codigo ao menos um vez, mesmo que a condição seja falsa  

    if (movbispo1 > 0 && movbispo2 > 0)   

    printf("Direita, cima!\n");

    movbispo1++;
    movbispo2++;

    } while (movbispo1 <= 5 && movbispo2 <= 5); //condição para execução do codigo

    printf("\n"); // linha de separação

    printf("MOVIMENTAÇÃO DA RAINHA!\n");

    /*for (variavel, condição, incremento), a variavel pode ser criada dentro do FOR
    mas só pode ser usada nessa parte do codigo se for criada aqui, para usar a variavel em 
    outros lugares do codigo a variavel deve ser criada fora do FOR*/

    for (movrainha; movrainha > 0; movrainha--) { // usar ; como separador. EXEMPLO for (a; b == 0; c++)

        if (movrainha <= 8)
        printf("Esquerda!\n");     

    } 

    return 0;

}


