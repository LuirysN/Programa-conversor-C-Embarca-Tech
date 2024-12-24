#include <stdio.h> //Adicionado #include <stdio.h> para incluir a biblioteca de entrada e saída de dados
#include <stdlib.h>

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

    if (comprimento < 0) {
        printf("Por favor, insira um valor positivo.\n");
        return 1;
    }

kilometro= comprimento/1000.0;
milimetro = comprimento*1000.0;
centimetro = comprimento * 100.0;

printf("O comprimento: %d \n Equivale a: %.2f quilometros!! \n" ,comprimento,kilometro); //adicionado %.2f para limitar a 2 casas decimais e float para kilometro
printf("O comprimento: %d \n Equivale a: %d milimetros!! \n" ,comprimento,milimetro);
printf("O comprimento: %d \n Equivale a: %.2f centimetros!! \n", comprimento, centimetro); //Adicionado conversão para centímetros

    system("pause");
    return 0;
}
