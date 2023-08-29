/*!
 *   Escreva uma função que recebe dois números inteiros positivos a e b por parâmetro e
 *   determina se eles são amigos ou não, devolvendo 1 caso sejam amigos, e 0 caso contrário.
 *   Dois números são amigos se cada número é igual à soma dos divisores próprios do outro
 *   (os divisores próprios de um número m são os divisores estritamente menores que m). Por
 *   exemplo, os divisores próprios de 220 são 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110, cuja soma
 *   é 284; e os divisores próprios de 284 são 1, 2, 4, 71 e 142, cuja soma é 220. Logo, 220 e
 *   284 são números amigos. O protótipo da função deve ser:
 *          int amigos(int a, int b);
*/


#include <stdio.h>
#include <stdlib.h>

int amigos(int a, int b);
void decompor_divs(int lista[], int obj);
int somar_list(int lista[], int obj);


int main()
{

    int cand_a, cand_b;
    printf("DIGITE OS VALORES DE A e B NO FORMATO:\n--> 'a' 'b'\n--> ");
    scanf("%d %d",&cand_a,&cand_b);

    puts("");
    if (amigos(cand_a,cand_b))
        printf("\n\nSao amigos!\n");
    else
        printf("\n\nNao sao amigos!\n");

    return 0;
}


int amigos(int a, int b){

    int divs_a[100], divs_b[100];

    decompor_divs(divs_a, a);
    decompor_divs(divs_b, b);

    int res_a = somar_list(divs_a, a);
    int res_b = somar_list(divs_b, b);

    if (res_a==b && res_b==a)
        return 1;
    else
        return 0;
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

int somar_list(int lista[], int obj){

    int resultado=0;

    for (int i=0;lista[i]!=obj;i++){
        resultado+=lista[i];
    }

    printf("\nOs divisores de %5d somaram ate %5d", obj, resultado);

    return resultado;
}
