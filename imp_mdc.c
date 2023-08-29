/*!
 * ENUNCIADO
 *
 *  Escreva uma função que calcule o máximo divisor comum de dois números m e n passados
 *  por parâmetro. Você deve utilizar a seguinte regra do cálculo do mdc onde m ≥ n
 *          mdc(m, n) = m se n = 0
 *          mdc(m, n) = mdc(n, m%n) se n > 0
 *  O protótipo da função deve ser:
 *      int mdc(int m, int n);
 *
*/

#include <stdio.h>
#include <stdlib.h>

int mdc(int m, int n);

int main(){

    int maior, menor, mdc_de;
    printf("Insira seus numero: ");
    scanf("%d %d",&maior, &menor);


    if (maior < menor) {
        int aux=menor;
        menor=maior;
        maior=aux;
    }

    mdc_de = mdc(maior, menor);

    printf("\nResultado: %d",mdc_de);

}

int mdc(int m, int n){

    if (n==0)
        return m;
    mdc(n, m%n);

}
