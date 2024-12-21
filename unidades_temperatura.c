#include <stdio.h>

void celsius_para_fahrenheit(float celsius) {
    float fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
}

void celsius_para_kelvin(float celsius) {
    float kelvin = celsius + 273.15;
    printf("%.2f Celsius = %.2f Kelvin\n", celsius, kelvin);
}

void fahrenheit_para_celsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5/9;
    printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
}

void fahrenheit_para_kelvin(float fahrenheit) {
    float kelvin = (fahrenheit - 32) * 5/9 + 273.15;
    printf("%.2f Fahrenheit = %.2f Kelvin\n", fahrenheit, kelvin);
}

void kelvin_para_celsius(float kelvin) {
    float celsius = kelvin - 273.15;
    printf("%.2f Kelvin = %.2f Celsius\n", kelvin, celsius);
}

void kelvin_para_fahrenheit(float kelvin) {
    float fahrenheit = (kelvin - 273.15) * 9/5 + 32;
    printf("%.2f Kelvin = %.2f Fahrenheit\n", kelvin, fahrenheit);
}

void input_temperatura(float *temperatura) {
    int valid_input = 0;
    
    
    while (!valid_input) {
        printf("Digite a temperatura: ");
        if (scanf("%f", temperatura) == 1) {
            valid_input = 1;  
        } else {
            printf("Entrada invalida! Por favor, digite um numero valido.\n");
         
            while(getchar() != '\n');  
        }
    }
    
   
}

int main() {

    
    int escolha = 0;
    float temperatura;
   
do {
    printf("Conversão de Temperaturas\n");
    printf("1 - Celsius para Fahrenheit e Kelvin\n");
    printf("2 - Fahrenheit para Celsius e Kelvin\n");
    printf("3 - Kelvin para Celsius e Fahrenheit\n");
    printf("X - Sair\n");
    printf("Escolha uma opcao (1, 2, 3) ou 0 parar sair: ");
    scanf("%d", &escolha);

   (escolha != 0) ? input_temperatura(&temperatura) : 0;

    switch (escolha) {
        case 1:
            celsius_para_fahrenheit(temperatura);
            celsius_para_kelvin(temperatura);
            break;
        case 2:
            fahrenheit_para_celsius(temperatura);
            fahrenheit_para_kelvin(temperatura);
            break;
        case 3:
            kelvin_para_celsius(temperatura);
            kelvin_para_fahrenheit(temperatura);
            break;
      case 0:
            break;
        default:
            printf("Opcao invalida!\n");
           
    }
}while (escolha!=0);


    return 0;
}
