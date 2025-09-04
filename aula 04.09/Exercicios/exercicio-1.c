#include <stdio.h>

void ipva_vencimento() {
    int mes;
    int placa, digito_verificador;

    printf("Digite a numeracao do mes atual:\n");
    scanf("%d",&mes);

    printf("Sabendo que a placa é composta por 4 dígitos numéricos, digite a placa do carro:\n");
    scanf("%d", &placa);

    digito_verificador = placa / 1000;

    if(digito_verificador == 1) {
        printf("Seu IPVA vence em janeiro");
    } else if(digito_verificador == 2) {
        printf("Seu IPVA vence em fevereiro");
    } else if(digito_verificador == 3) {
        printf("Seu IPVA vence em março");
    } else if(digito_verificador == 4) {
        printf("Seu IPVA vence em abril");
    } else if(digito_verificador == 5) {
        printf("Seu IPVA vence em maio");
    } else if(digito_verificador == 6) {
        printf("Seu IPVA vence em junho");
    } else if(digito_verificador == 7) {
        printf("Seu IPVA vence em julho");
    } else if(digito_verificador == 8) {
        printf("Seu IPVA vence em agosto");
    } else if(digito_verificador == 9) {
        printf("Seu IPVA vence em setembro");
    } else if(digito_verificador == 10) {
        printf("Seu IPVA vence em outuubro");
    } else if(digito_verificador == 11) {
        printf("Seu IPVA vence em novembro");
    } else if(digito_verificador == 12) {
        printf("Seu IPVA vence em dezembro");
    } 
}
int main() {
    ipva_vencimento();
    return 0;
}