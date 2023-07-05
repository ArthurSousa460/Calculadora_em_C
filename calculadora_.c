#include<stdio.h>
#include<locale.h>


//Funções da calculadora

float sum(float num1, float num2){
//Função que retorna a soma de dois números
    return num1 + num2;
}

float sub(float num1, float num2){
//Função que retorna a subtração de dois números
    return num1 - num2;
}

float mult(float num1, float num2){
//Função que retorna a multiplicação de dois números
    return num1 * num2;
}

float div(float num1, float num2){
//Função que retorna a divisão de dois números
    float maior;

    maior = num1;

    if(maior < num2){
        maior = num2;
        return maior / num1;
    }else{
        maior = num1;
        return maior / num2;
    }

}


int main(int argc, char * agrv[]){

    setlocale(LC_ALL, "Portuguese"); // aceita caracteres do português

    // declaração das variaveis
    int op, c;
    float n1, n2;


    while (c != 999){

        printf("----------Calculadora-----------\n");
        printf(" 1-somar\n 2-subtrair\n 3-multiplicar\n 4-dividir\n 5-sair\n ");

        printf("Digite a opção que deseja:");
        scanf("%i", &op);

        if(op == 5){
            break;
        }

        printf("Digite o número:");
        scanf("%f", &n1);

        printf("Digite o segundo número:");
        scanf("%f", &n2);   


        switch(op){
            case 1:
            printf("%.2f \n", sum(n1, n2));
            break;
            case 2:
            printf("%.2f \n", sub(n1, n2));
            break;
            case 3:
            printf("%.2f \n",  mult(n1, n2));
            break;
            case 4:
            printf("%.2f \n", div(n1, n2));
            break;
        }

}
    

}