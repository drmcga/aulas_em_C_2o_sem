/*!
 * ENUNCIADO
 *
 *  Implemente a funcao int pitagorico(int n); que verifica se n e pitagorico
 *  um numero e pitagorico quando satisfaz: a^2 + b^2 = n
 *  a funcao deve retornar 1 se n for pitagorico e 0 se nao for.
 *
*/

#include <stdio.h>
#include <stdlib.h>

int pitagorico(int n);
int is_quadrado(int n);

int main(){

    int num, resu;
    
    printf("Insira seu numero: ");
    scanf("%d",&num);
    
    resu = pitagorico(num);
    printf("\nResultado %d", resu);
  
    /*!para teste de todos os valores ate 10000
    
    for (int i=0;i<10000;i++){
        resu = pitagorico(i);
        if (resu==1){
            printf(" resultado %4d",i);
        }
    }
    */
}

int is_quadrado(int n){

    for (int i=1;i<=n/2;i++){
        if (i*i==n){
            return 1;

        }
    }
    return 0;
}


int pitagorico(int n){

    for (int i=1; i<n/2;i++){
        
        if (is_quadrado(i) && is_quadrado(n-i)){
            printf("\nValores A= %3d B= %4d ",i,n-i);
            return 1;
        }

    }

    return 0;

}

