#include<stdio.h>
#include<windows.h>
// O programa solicita ao usuário uma temperatura e sua respectiva escala (Celsius ou Fahrenheit), realiza a conversão matemática adequada e exibe o resultado formatado.

int main(){

    SetConsoleOutputCP(65001);

    float temperature, converted;
    char  scale;

    printf("Digite a temperatura: ");
    scanf("%f", &temperature);

    printf("Digite a escada( C para Celsius, F para Fahrenheit): ");
    scanf(" %c", &scale);

    if(scale == 'c' || scale == 'C'){
        converted = (temperature * 9.0 / 5.0) + 32.0;
        printf("%.2f °C = %.2f °F\n", temperature, converted);
    } else if ( scale == 'f' || scale == 'F'){
        converted = (temperature - 32.0) * 5.0 / 9.0;
        printf("%.2f °F = %.2f °C\n", temperature, converted);
    } else {
        printf("Escala inválida!\n");
        return 1;
    }

    return 0;

}