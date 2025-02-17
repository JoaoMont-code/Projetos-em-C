#include <stdio.h>

int main(){
    int salario;
    float resultado;

    printf("digite seu salario: ");
    scanf("%d", &salario);

    if(salario <= 2000){
        printf("isento");
    }if(salario > 2000 && salario <= 4000){
        resultado = 7.5 * salario;
         printf("o resultado de 7.5 * %D é: %.2f\n",salario,resultado);
    }if(salario > 4000 && salario <= 6000 ){
        resultado = 0.15 * salario;
        printf("o resultado de  0.15 * %d é: %.2f\n",salario,resultado);
    }


return 0;
}
