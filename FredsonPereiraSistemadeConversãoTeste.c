#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_HISTORICO 100

// Estrutura para armazenar o histórico de conversões
typedef struct {
    char entrada, saida;
    double valor, resultado;
} Conversao;

// Vetor de fatores de conversão
const double fatores[] = {1000.0, 100.0, 10.0, 1.0, 0.1, 0.01, 0.001};
const char unidades[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};

// Protótipos das funções
double obterFator(char unidade);
double converter(double valor, char entrada, char saida);
void exibirHistorico(Conversao historico[], int contador);
bool validarUnidade(char unidade);

int main() {
    // Definição das variáveis
    Conversao historico[MAX_HISTORICO];
    int contador = 0;
    char unidade_entrada = '\0', unidade_saida;
    double valor, resultado;

    while(1) {
        // Interface inicial
        printf("\n===============================\n");
        printf("     Conversor de Distancias    \n");
        printf("===============================\n");
        printf("Unidades disponiveis:\n");
        printf("A - Quilometro (km)\n");
        printf("B - Hectometro (hm)\n");
        printf("C - Decametro (dam)\n");
        printf("D - Metro (m)\n");
        printf("E - Decimetro (dm)\n");
        printf("F - Centimetro (cm)\n");
        printf("G - Milimetro (mm)\n");
        printf("X - Sair\n\n");

        // escolher a unidade de entrada
        printf("\nEscolha a unidade de entrada (A-G ou X para sair): ");
        scanf(" %c", &unidade_entrada);
        unidade_entrada = toupper(unidade_entrada); // transforma a var. em maiuscula caso o usuario digite minuscula

        if (unidade_entrada == 'X') {
            printf("Encerrando o programa. Ate logo!\n");
            break;
        }

        if (!validarUnidade(unidade_entrada)) {
            printf("Unidade de entrada invalida. Tente novamente.\n");
            continue;
        }
        
        // escolher a unidade de saída
        printf("Escolha a unidade de saida (A-G): ");
        scanf(" %c", &unidade_saida);
        unidade_saida = toupper(unidade_saida);

        if (!validarUnidade(unidade_saida)) {
            printf("Unidade de saida invalida. Tente novamente.\n");
            continue;
        }
        
        // pedir valor de entrada
        printf("Digite o valor na unidade de entrada: ");
        scanf("%lf", &valor);

        // Realizar a conversão
        resultado = converter(valor, unidade_entrada, unidade_saida);
    
        // Exibir o resultado
        printf("\nO resultado e: %.2f\n", resultado);

        // Salvar no histórico
        if (contador < MAX_HISTORICO) {
            historico[contador].entrada = unidade_entrada;
            historico[contador].saida = unidade_saida;
            historico[contador].valor = valor;
            historico[contador].resultado = resultado;
            contador++;
        }

        // Opção de exibir histórico
        printf("\nDeseja ver o historico de conversoes? (S/N): ");
        char opcao;
        scanf(" %c", &opcao);
        if (toupper(opcao) == 'S') {
            exibirHistorico(historico, contador);
        }

        // Limpar tela para próxima iteração
        system("pause");
        system("cls");
    }
    return 0;
}

// Função para obter o fator de conversão
double obterFator(char unidade) {
    int index = unidade - 'A';
    return fatores[index];
}

// Função para realizar a conversão
double converter(double valor, char entrada, char saida) {
    return valor * (obterFator(entrada) / obterFator(saida));
}

// Função para exibir o histórico de conversões
void exibirHistorico(Conversao historico[], int contador) {
    printf("\nHistorico de conversoes:\n");
    for (int i = 0; i < contador; i++) {
        printf("%.2f %c -> %.2f %c\n",
               historico[i].valor, historico[i].entrada,
               historico[i].resultado, historico[i].saida);
    }
}

// Função para validar uma unidade
bool validarUnidade(char unidade) {
    return unidade >= 'A' && unidade <= 'G';
}