#include <stdio.h>

int main() {
    int data, dia, mes, ano;
    printf("Digite uma data no formato ddmmaa");
    scanf("%d", &data);
    //121025
    dia = data / 10000;
    //121025 / 10000 = resto 
    // 51025 / 1000 = 510
    //510 % 100 = resto 10
    mes = (((data % 100000) / 100) % 100);
    //121025 % 100000 = resto 51025
    // 51025 / 1000 = 510
    //510 % 100 = resto 10
    ano = (data % 1000);
    printf("O dia e %d, o mes e %d e o ano e %d",dia, mes, ano);
}