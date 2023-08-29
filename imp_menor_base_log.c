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
void decompor_divs(int lista[], int obj);
int menor_pot_possivel(int lista[], int obj);

int main(){

    int num, resu;
    printf("Insira seu numero: ");
    scanf("%d",&num);

    resu = menor_base_log(num);

    printf("\nResultado: %d",resu);

}

void decompor_divs(int lista[], int obj){

    int cont=0;
    for (int i=1;i<=obj;i++){
        if (obj%i==0){

            lista[cont]=i;
            cont++;
        }
    }
    printf("\nOs divs de %5d sao: ",obj);
    for (int i=0;i<cont-1;i++)
        printf("%5d ",lista[i]);
    printf("\n");
}

int menor_pot_possivel(int lista[], int obj){

    int aux=1;
    for (int i=1;lista[i]!=obj;i++){
        while (aux<obj){
            aux*=lista[i];
        }if (aux==obj){
            return lista[i];
        }
        aux=1;
    }
    return 0;
}

int menor_base_log(int n){

    int res=0, divs_n[100];

    decompor_divs(divs_n, n);
    res=menor_pot_possivel(divs_n,n);
    if (!res) res=n;
    return res;
}

