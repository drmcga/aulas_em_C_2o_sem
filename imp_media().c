/*!
 * ENUNCIADO
 *
 *  Escreva uma função que recebe um vetor de números reais e o seu tamanho por parâmetro
 *  e devolve a média aritmética dos números do vetor. O protótipo da função deve ser:
 *          double media(double v[], int tam);
 *
*/

#include <stdio.h>
#include <stdlib.h>

double media(double v[], int tam);
void enche_lista(double obj[], int tam);


int main(){

    int tamanho;

    printf("decida o tamanho: ");
    scanf("%d", &tamanho);

    double lista[tamanho];

    enche_lista(lista, tamanho);
    printf("\na media e: %.2lf", media(lista, tamanho) );
}

void enche_lista(double obj[], int tam){
    
    for (int i=0;i<tam;i++){
        printf("item num %3d : ", i);
        scanf("%lf", &obj[i]);
    }

}


double media(double v[], int tam){

    double somatoria=0;
    for (int i=0;i<tam;i++){
        somatoria+=v[i];
    }
    return somatoria/tam;

}
