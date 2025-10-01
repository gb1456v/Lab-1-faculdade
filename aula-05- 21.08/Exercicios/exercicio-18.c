#include <stdio.h>
#include <math.h>
int main()
{
    // Preços fixos para latas e galões
    const float PRECO_LATA = 80.0;
    const float PRECO_GALAO = 25.0;
    const int volume_lata = 18;
    const float volume_galao = 3.6;

    float preco_apenas_latas, preco_apenas_galoes, preco_mistura, litros_necessarios, restante_tinta;
    int qtd_galao, qtd_lata, tam_area, qtd_galao_mistura, qtd_lata_mistura;

    // entrada
    printf("Qual o tamanho, em m², do local onde sera aplicada a tinta?");
    scanf("%d", &tam_area);

    // processamento
    litros_necessarios = tam_area / 6.0;
    printf("\nLitros necessários: %.2f\n\n", litros_necessarios);

    // Situação 1 - comprar apenas latas

    qtd_lata = ceil(litros_necessarios / volume_lata);
    preco_apenas_latas = PRECO_LATA * qtd_lata;
    printf("A quantidade de latas necessárias para esta área é %d e o valor gasto para pintar esta área é %d", qtd_lata, preco_apenas_latas);
    // Situação 2 - comprar apenas galões
    qtd_galao = ceil(litros_necessarios / volume_galao);
    preco_apenas_galoes = qtd_galao * PRECO_GALAO;
    printf("O total de galões necessários é %d e o valor estimado para pintar esta área é %d", qtd_galao, preco_apenas_galoes);
    // Situação 3 - Misturar galões e latas para não haver desperdício
    qtd_lata_mistura = ceil(litros_necessarios / volume_lata);
    restante_tinta =
}