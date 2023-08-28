/*!
 * ENUNCIADO
 *
 *  Desenvolva um programa que usa uma struct para registrar
 *  dados de um cliente.
 *  Esse programa deve solicitar e depois retornar os dados.
 *  Deve coletar: nome, codigo da conta, idade, sexo,
 *  a senha, o saldo e o debito.
 *
 *  Não se preocupe com a validade de qualquer um dos dados inseridos.
*/

#include <stdio.h>
#include <stdlib.h>


struct clientes{

    char nome[100];
    int cod_conta, idade, senha;
    char sexo;
    float saldo_conta, debito_conta;

};

int main(){

    struct clientes novo;

    printf("\nBem vindo ao terminal, user.");
    printf("\n\n!!Novo usuario detectado!!\n");
    printf("\n-->Por favor insira seus dados.\n\nNOME:\n--> ");
    gets(novo.nome);
    fflush(stdin);

    printf("CODIGO DA CONTA:\n--> ");
    scanf("%d",&novo.cod_conta);
    fflush(stdin);

    printf("IDADE:\n--> ");
    scanf("%d",&novo.idade);
    fflush(stdin);

    printf("SEXO M ou N:\n--> ");
    scanf("%c",&novo.sexo);
    fflush(stdin);

    printf("SENHA:\n--> ");
    scanf("%d",&novo.senha);

    printf("SALDO:\n--> ");
    scanf("%f",&novo.saldo_conta);

    printf("DEBITO:\n--> ");
    scanf("%f",&novo.debito_conta);


    printf("\nDados recebidos, sr(a) _%s_\n",novo.nome);
    printf("Sua idade: %d // Sexo: %c",novo.idade, novo.sexo);
    printf("\nSenha: %d //Codigo: %d\n",novo.senha,novo.cod_conta);
    printf("Valor liquido: %.2f\n",novo.saldo_conta-novo.debito_conta);

}

