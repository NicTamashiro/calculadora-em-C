#include <stdio.h>

int main(){

    float num1, num2;
    char operacao;

    printf("Digite o primeiro numero: \n");
    scanf("%f", &num1);
    printf("Digite a operacao: \n");
    scanf(" %c", &operacao);
    printf("Digite o segundo numero: \n");
    scanf("%f", &num2);

    switch (operacao){
    case '+':
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1+num2);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f\n", num1, num2, num1-num2);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f\n", num1, num2, num1*num2);
        break;
    case '/':
        printf("%.2f / %.2f = %.2f\n", num1, num2, num1/num2);
        break;
    default:
        printf("Erro: Digite uma operacao valida.\n");
    }

    return 0;
}
