#include <stdio.h>

int main(){
    int comprimento, kilometro, milimetro;

    printf("\n\t----CONVERSAO DE MEDIDAS----\n");
    printf("Digite o comprimento em metros: \n");
    scanf("%d", &comprimento);

kilometro= comprimento/1000;
milimetro = comprimento*1000;

printf("O comprimento: %d \n Equivale a: %d quilometros!! \n" ,comprimento,kilometro);
printf("O comprimento: %d \n Equivale a: %d milimetros!! \n" ,comprimento,milimetro);

    system("pause");
    return 0;
}