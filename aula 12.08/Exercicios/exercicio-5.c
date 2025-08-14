#include <stdio.h>

int main() {
    char nome[10];
    int idade;
    printf("Qual meu nome?\n");
    scanf("%s", nome);
    printf("Qual minha idade?\n");
    scanf("%d", &idade);

    printf("Meu nome é %s.\nEu tenho %d anos\n", nome, idade);


}