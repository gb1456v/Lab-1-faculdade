#include <stdio.h>
#include <math.h>
int main()
{
    // Preços fixos para latas e galões
    const float PRECO_LATA = 80.0;
    const float PRECO_GALAO = 25.0;

    float preco_apenas_latas, preco_apenas_galoes, preco_mistura, litros_necessarios, resto;
    int qtd_galao, qtd_lata, tam_area, qtd_galao_mistura, qtd_lata_mistura;

    // entrada
    printf("Qual o tamanho, em m², do local onde sera aplicada a tinta?");
    scanf("%d", &tam_area);

    // processamento
    litros_necessarios = tam_area / 6.0;
    printf("\nLitros necessários: %.2f\n\n", litros_necessarios);

    // --- Situação 1: Comprar apenas latas de 18 litros ---
    qtd_lata = (int)ceil(litros_necessarios / 18.0);
    preco_apenas_latas = qtd_lata * PRECO_LATA;
    printf("Situação 1 (apenas latas de 18L):\n");
    printf("Comprar %d lata(s), totalizando R$ %.2f\n\n", qtd_lata, preco_apenas_latas);

    // --- Situação 2: Comprar apenas galões de 3.6 litros ---
    qtd_galao = (int)ceil(litros_necessarios / 3.6);
    preco_apenas_galoes = qtd_galao * PRECO_GALAO;
    printf("Situação 2 (apenas galões de 3.6L):\n");
    printf("Comprar %d galão(ões), totalizando R$ %.2f\n\n", qtd_galao, preco_apenas_galoes);

    // --- Situação 3: Misturar latas e galões para melhor preço ---
    qtd_lata_mistura = (int)(litros_necessarios / 18.0);
    resto = litros_necessarios - (qtd_lata_mistura * 18.0);
    qtd_galao_mistura = (int)ceil(resto / 3.6);
    preco_mistura = (qtd_lata_mistura * PRECO_LATA) + (qtd_galao_mistura * PRECO_GALAO);
    printf("Situação 3 (mistura otimizada):\n");
    printf("Comprar %d lata(s) e %d galão(ões), totalizando R$ %.2f\n", qtd_lata_mistura, qtd_galao_mistura, preco_mistura);
}