#include<stdio.h>
//Simples calculadora em C. Versão 0.1

int main(){
    float num1, num2, result;
    char operation;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite a operação ( +, -, *, / ): ");
    scanf(" %c", &operation);

     printf("Digite o segundo numero: ");
     scanf("%f", &num2);

     switch (operation)
     {
     case '+' :
        result = num1 + num2;
        break;
    case '-' :
        result = num1 - num2;
        break;
    case '*' :
        result = num1 * num2;
        break;
    case '/' :
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            printf("Erro: Divisão por zero!\n");
            return 1;
        }
        break;     
     default:
        printf("Operador inválido!\n");
        return 1;
     }
     printf("%.2f %c %.2f = %.2f\n", num1, operation, num2, result);
     return 0;    
}