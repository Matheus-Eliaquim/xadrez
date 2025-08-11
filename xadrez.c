#include <stdio.h>

//estrutura de movimentação da torre com recurso
void torre(int mtorre) {
    if(mtorre <= 5 && mtorre > 0){
        printf("Direita!\n");
        mtorre++;
        torre(mtorre);
        }
}

//estrutura de movimentação do bispo com recurso
void bispo(int mbispo, char mbispo2) {
    if(mbispo2 >= 'A' && mbispo2 <= 'E') {
        mbispo2++;
        printf("Cima!\n");    
    if (mbispo <= 5 && mbispo > 0) {
        mbispo++;    
        printf("Direita!\n"); 
    } 
        bispo(mbispo, mbispo2); 
        }   
}      

//estrutura de movimentação da rainha com recurso
void rainha (mrainha) {
    if(mrainha > 0 && mrainha <=8){
        mrainha--;
        printf("Esqueda!\n");
        rainha(mrainha);
    }
}

/* 
O jogo está em fase inicial e por enquanto deve fazer a movimentação das tres peças abaixo:

Torre: Movendo 05 casas para direita
Bispo: movendo 05 casas na diagonal
rainha: movendo 08 casas a esquerda 
*/

int main () {


    //declaracao de variaveis
    int movtorre = 1, movbispo1 = 1, movbispo2 = 'A', movrainha = 8, movcavalo1 = 1;
    char  movcavalo2 = 'A';


printf("Bem vindo ao teste de xadrez!\n"); // tela de bem vindo
printf("A movimentação das peças será automatica\n"); //explicação do teste
printf("pois ainda estamos em fase de teste!\n\n");

//movimentação das peças


//estrutura de movimento definida na função void torre
printf("MOVIMENTAÇÃO DA TORRE:\n");
torre(movtorre);
printf("\n");



//estrutura de movimento definida na função void bispo
printf("MOVIMENTAÇÃO DO BISPO:\n");
bispo(movbispo1, movbispo2);
printf("\n");

    
//estrutura de movimento definida na função void rainha
printf("MOVIMENTAÇÃO DA RAINHA!\n");
rainha(movrainha);   
printf("\n");

//estrutura de loop aninhada para movimentação do cavalo

printf("MOVIMENTAÇÃO DO CAVALO!\n");

    for (movcavalo2; movcavalo2 < 'B' ; ++movcavalo2) { //loop externo
        
        for (movcavalo1; movcavalo1 > 0 && movcavalo1 < 3; movcavalo1++) { //loop interno
            printf("Cima!\n"); //impressão do loop interno      
        }
        printf("Direita!\n"); //impressão do loop externo
    }

    return 0;

}

