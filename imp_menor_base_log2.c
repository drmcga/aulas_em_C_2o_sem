/*!
 * ENUNCIADO
 *
 *  Escreva uma função que recebe um valor inteiro positivo n como parâmetro e devolve um
 *  valor inteiro b tal que b^k = n para algum inteiro k, e b seja o menor possível. Por exemplo,
 *  se n = 27 então o valor devolvido deve ser 3, já se n = 12 então o valor devolvido deve ser
 *  12. Não use funções de bibliotecas na sua solução. O protótipo da função deve ser:
 *
 *  int menor_base_log(int n);
*/

#include <stdio.h>
#include <stdlib.h>

int menor_base_log(int n);

int main(){

    int num, resu;
    printf("Insira seu numero: ");
    scanf("%d",&num);

    resu = menor_base_log(num);

    printf("\nResultado: %d",resu);

}
int menor_base_log(int n){

    if (n==1) return 1;

    int aux=1;
    for (int i=2;i<n;i++){
        while (aux<n && n%i==0){
            aux*=i;
        }if (aux==n){
            return i;
        }
        aux=1;
    }
}
