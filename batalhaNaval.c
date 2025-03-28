#include <stdio.h>
#define linha 10 //define uma constante para o numero da linha e da coluna 
#define coluna 10

int main(){
    int batalha[linha][coluna];
    
    int numlinha = 1;
    printf("   A  B  C  D  E  F  G  H  I  J\n");// nomeia o cabeçalho do tabuleiro 
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            batalha[i][j] = 0;
            if(j == 0){//insere o número da linha no tabuleiro
                printf("%2d", numlinha);//
            }
            if(i == 5 && (j >= 5 && j <= 8) ){//estabelece a posição do navio na linha 7
                batalha[i][j] = 3;
            }
            if(j == 2 && i >= 1 && i <= 5){//estabelece a posição do navio na coluna 3 na vertical
                batalha[i][j] = 4;
            }
            if (i + j == 14 && i >= 7 && i <= 9 && j >= 5 && j <= 7){//estabelece a posição do navio na diagonal da esqueda para direita
                batalha[i][j] = 5;         
            }
            if(j - i == 3 && i > 0 && i < 4 &&  j > 3 && j < 8 ){//estabelece a posição do navio na diagonal da direita pra esquerda
                batalha[i][j] = 7;
            }
            printf("%2d ", batalha[i][j]);//imprime a linha do tabuleiro em cada ciclo
        }
        printf("\n");
        numlinha++;//incrementa o numero da linha para identificar a linha seguinte
    }
    return 0;
}