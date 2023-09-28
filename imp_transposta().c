/*!
 * ENUNCIADO
 *
 *  Escreva uma função que recebe como parâmetro duas matrizes quadradas de tamanho
 *  no máximo 30x30, onde a primeira matriz corresponde a uma matriz de entrada e a
 *  segunda corresponde a uma matriz resposta. A função deve calcular a transposta da
 *  matriz de entrada e guardar o resultado na matriz resposta. A função também recebe
 *  como parâmetro um inteiro n que indica as dimensões das matrizes. O protótipo da
 *  função deve ser:
 *      void transposta(double mat1[30][30], double matRes[30][30], int n);
 *
*/

#include <stdio.h>
#include <stdlib.h>

void transposta(double mat1[30][30], double matRes[30][30], int n);
void enche_matriz(double obj[][30], int tam);
void printar_matriz(double obj[][30], int tam);


int main(){

    int tamanho;

    printf("decida o tamanho: ");
    scanf("%d", &tamanho);

    double lista[30][30], lfinal[30][30];

    enche_matriz(lista, tamanho);
    printar_matriz(lista, tamanho);

    puts("");

    transposta(lista, lfinal, tamanho);
    printar_matriz(lfinal, tamanho);

}

void printar_matriz(double obj[30][30], int tam){

    printf("A matriz:\n");
    for (int i=0;i<tam;i++){
        for (int j=0;j<tam;j++){
            printf("%.2lf\t\t", obj[i][j]);
        }
        puts("");
    }
    return;
}

void enche_matriz(double obj[][30], int tam){

    for (int i=0;i<tam;i++){
        for (int j=0;j<tam;j++){
            printf("lin %2d / col %2d : ", i, j);
            scanf("%lf", &obj[i][j]);
        }
        puts("");

    }

}

void transposta(double mat1[30][30], double matRes[30][30], int n){



    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            matRes[i][j]=mat1[j][i];
        }

    }

}

