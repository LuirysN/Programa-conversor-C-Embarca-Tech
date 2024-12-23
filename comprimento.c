#include <stdio.h> //Adicionado #include <stdio.h> para incluir a biblioteca de entrada e saída de dados

int main(){
    // Definição das variáveis 
    int comprimento, milimetro; // variável do tipo inteiro
    float kilometro; 

    printf("\n\t----CONVERSAO DE MEDIDAS----\n");
    printf("Digite o comprimento em metros: \n");
    scanf("%d", &comprimento);

kilometro= comprimento/1000.0;
milimetro = comprimento*1000.0;

printf("O comprimento: %d \n Equivale a: %.2f quilometros!! \n" ,comprimento,kilometro); //adicionado %.2f para limitar a 2 casas decimais e float para kilometro
printf("O comprimento: %d \n Equivale a: %d milimetros!! \n" ,comprimento,milimetro);

    system("pause");
    return 0;
}
