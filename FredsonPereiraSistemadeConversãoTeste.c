#include <stdio.h>

int main() {
    char unidade_entrada, unidade_saida;
    double valor, resultado;

    printf("Conversor de unidades de distância\n");
    printf("Unidades disponiveis:\n");
    printf("A - Quilometro (km)\n");
    printf("B - Hectometro (hm)\n");
    printf("C - Decametro (dam)\n");
    printf("D - Metro (m)\n");
    printf("E - Decimetro (dm)\n");
    printf("F - Centimetro (cm)\n");
    printf("G - Milimetro (mm)\n");

    // escolher a unidade de entrada
    printf("\nEscolha a unidade de entrada (A-G): ");
    scanf(" %c", &unidade_entrada);

    // escolher a unidade de saída
    printf("Escolha a unidade de saida (A-G): ");
    scanf(" %c", &unidade_saida);

    // pedir valor de entrada
    printf("Digite o valor na unidade de entrada: ");
    scanf("%lf", &valor);

    // conversão para metros
    if (unidade_entrada == 'A') {
        valor *= 1000.0;  // km -> m
    } else if (unidade_entrada == 'B') {
        valor *= 100.0;   // hm -> m
    } else if (unidade_entrada == 'C') {
        valor *= 10.0;    // dam -> m
    } else if (unidade_entrada == 'D') {
        valor *= 1.0;     // m -> m
    } else if (unidade_entrada == 'E') {
        valor *= 0.1;     // dm -> m
    } else if (unidade_entrada == 'F') {
        valor *= 0.01;    // cm -> m
    } else if (unidade_entrada == 'G') {
        valor *= 0.001;   // mm -> m
    } else {
        printf("Unidade de entrada invalida!\n");
        return 1;
    }

    // Converter de metros para a unidade de saída
    if (unidade_saida == 'A') {
        resultado = valor / 1000.0;  // m -> km
    } else if (unidade_saida == 'B') {
        resultado = valor / 100.0;   // m -> hm
    } else if (unidade_saida == 'C') {
        resultado = valor / 10.0;    // m -> dam
    } else if (unidade_saida == 'D') {
        resultado = valor / 1.0;     // m -> m
    } else if (unidade_saida == 'E') {
        resultado = valor / 0.1;     // m -> dm
    } else if (unidade_saida == 'F') {
        resultado = valor / 0.01;    // m -> cm
    } else if (unidade_saida == 'G') {
        resultado = valor / 0.001;   // m -> mm
    } else {
        printf("Unidade de saida invalida!\n");
        return 1;
    }

    //resultado
    printf("\nO resultado e: %.2f\n", resultado);
    system("pause");
    return 0;
}
