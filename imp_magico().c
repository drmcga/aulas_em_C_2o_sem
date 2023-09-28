/*!
 * ENUNCIADO
 *
 *  Uma matriz quadrada de inteiros é um quadrado mágico se a soma dos elementos de cada
 *  linha, a soma dos elementos de cada coluna, a soma dos elementos da diagonal principal
 *  e da diagonal secundária são todos iguais. A matriz abaixo é um exemplo de quadrado
 *  mágico:
 *            3 4 8
 *           10 5 0
 *            2 6 7
 *  Escreva uma função que recebe como parâmetro uma matriz quadrada de tamanho no
 *  máximo 3030, e suas dimensões n, e determina se ela é um quadrado mágico devolvendo
 *  1 caso seja e 0 caso contrário. O protótipo da função deve ser:
 *        int magico(int mat[30][30], int n);
 *
 *
*/

#include <stdio.h>
#include <stdlib.h>

int magico(int mat[30][30], int n);
void enche_matriz(int obj[][30], int tam);

int main(){

    int tamanho;
    printf("Digite seu tamanho : ");
    scanf("%d", &tamanho);

    int matriz[30][30];
    int resultado;

    enche_matriz(matriz, tamanho);

    resultado = magico(matriz,tamanho);

    printf("\nO resultado da funcao foi: %d .", resultado);
}

void enche_matriz(int obj[][30], int tam){

    for (int i=0;i<tam;i++){
        for (int j=0;j<tam;j++){
            printf("lin %2d / col %2d : ", i, j);
            scanf("%d", &obj[i][j]);
        }
        puts("");

    }

}


int magico(int mat[30][30], int n){

    int soma1=0,soma2=0, magica, erros=0;




    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){

            soma1+=mat[i][j];
            soma2+=mat[j][i];
        }

        if (i==0)
            magica=soma1;
        else if (magica!=soma1||magica!=soma2){
            erros=1;
        }

        soma1=0;
        soma2=0;

    }
    for (int i=0;i<n;i++){
        soma1+=mat[i][i];
        soma2+=mat[n-i-1][i];
    }
    
    if (magica!=soma1||magica!=soma2){
        erros=1;
    }


    if (erros)
        return 0;
    else
        return 1;
}
