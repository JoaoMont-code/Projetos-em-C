#include <stdio.h>

int main() {
    float saldo;
    float sacar;
    char opcao;
    char resultado;

    printf("Seja bem-vindo ao Banco do Brasil!\n");
    printf("Digite o saldo da sua conta: ");
    scanf("%f", &saldo);

    getchar();

    printf("Selecione sua opcao:\n");
    printf("1. SACAR DINHEIRO\n");
    scanf("%c", &opcao);

    if(opcao = 1 && saldo > 5){
        printf("informe quanto voce desejar sacar\n");
        scanf("%f", &sacar);
    if(sacar <= saldo) {
        saldo -= sacar;
        printf("Saque realizado com sucesso! Novo saldo: %.2f\n", saldo);
        } else {
            printf("Saldo insuficiente para o saque!\n");
        }
    } else if (opcao == '2') {
        printf("Consultando empréstimo.\n");

    } else {
        printf("Opcao invalida!\n");
    }


    return 0;
}
