#include<stdio.h>


//Estamos criando duas constante para não precisar espalhar 20 e 10 por todo o codigo.
#define LINHAS  20
#define COLUNAS 10


int main (){    
       
    int tabuleiro[LINHAS][COLUNAS];    

   
    //Mostra tabuleiro
    printf("+----------+\n");

    for(int i = 0; i < LINHAS; i++){
        printf("|");

        for(int j = 0; j < COLUNAS; j++){

            tabuleiro[i][j] = 0;


            if(tabuleiro[i][j] == 0){
   
             printf(" ");
            }else {
                printf("#");
            }
        }

        printf("|\n");
    }

    printf("+----------+\n");

    return 0;
}