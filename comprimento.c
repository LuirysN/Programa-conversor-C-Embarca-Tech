#include <stdio.h> //Adicionado #include <stdio.h> para incluir a biblioteca de entrada e saída de dados
#include <stdlib.h> //Adicionado #include <stdlib.h> para incluir a biblioteca de funções de propósito geral

// Funções para conversão de unidades
float converterParaKilometros(int metros) {
    return metros / 1000.0;
}

float converterParaHectometros(int metros) {
    return metros / 100.0;
}

float converterParaDecametros(int metros) {
    return metros / 10.0;
}

float converterParaCentimetros(int metros) {
    return metros * 100.0;
}

float converterParaDecimetros(int metros) {
    return metros * 10.0;
}

int converterParaMilimetros(int metros) {
    return metros * 1000;
}

int main(){
    // Definição das variáveis 
    int comprimento;
    int opcao;

    printf("\n\t---- CONVERSAO DE MEDIDAS ----\n\n");

    // Solicita o comprimento em metros
    printf("Digite o comprimento em metros: ");
    scanf("%d", &comprimento);
    //Validação do comprimento, se menor que zero, exibe mensagem de erro e retorna 1
    if (comprimento < 0) {
        printf("Por favor, insira um valor positivo.\n");
        return 1;
    }

    // Exibe o menu de opções
    printf("Escolha a unidade para conversao:\n");
    printf("1 - Quilometros\n");
    printf("2 - Hectometros\n");
    printf("3 - Decametros\n");
    printf("4 - Centimetros\n");
    printf("5 - Decimetros\n");
    printf("6 - Milimetros\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao); //Lê a opção desejada

    // Processa a opção selecionada
    //Switch case para as opções de conversão
    //FIM tags para completar o código
    switch (opcao) {
        case 1:
            printf("O comprimento: %d metros equivale a %.2f quilometros.\n", comprimento, converterParaKilometros(comprimento));
            break;
        case 2:
            printf("O comprimento: %d metros equivale a %.2f hectometros.\n", comprimento, converterParaHectometros(comprimento));
            break;
        case 3:
            printf("O comprimento: %d metros equivale a %.2f decametros.\n", comprimento, converterParaDecametros(comprimento));
            break;
        case 4:
            printf("O comprimento: %d metros equivale a %.2f centimetros.\n", comprimento, converterParaCentimetros(comprimento));
            break;
        case 5:
            printf("O comprimento: %d metros equivale a %.2f decimetros.\n", comprimento, converterParaDecimetros(comprimento));
            break;
        case 6:
            printf("O comprimento: %d metros equivale a %d milimetros.\n", comprimento, converterParaMilimetros(comprimento));
            break;
        default:
            printf("Opcao invalida. Por favor, tente novamente.\n");
    }

    printf("\n"); //Pula uma linha para melhorar a legibilidade
    system("pause"); //Pausa a execução do programa
    return 0; //Retorna 0 para indicar que o programa foi executado com sucesso
}