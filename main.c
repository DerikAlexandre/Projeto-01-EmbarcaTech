#include<stdio.h>

void comprimento(){}

void massa(){}

void volume(){}

void temperatura(float valor){

  int selecao;
  float result;
  printf("\n\n===Insira a conversao que deseja realizar:===\n\n");
  printf("1-Celsius para Fahrenheit\n");
  printf("2-Celsius para Kelvin\n");
  printf("3-Fahrenheit para Celsius\n");
  printf("4-Fahrenheit para Kelvin\n");
  printf("5-Kelvin para Celsius\n");
  printf("6-Kelvin para Fahrenheit\n");
  printf("\n====================\n");
  scanf("%d", &selecao);

  switch(selecao){
    case 1: 
    result = valor*9/5+32;
    printf("\nValor convertido: %.2fF", result);
    break;

    case 2: 
    result = valor+273.15;
    printf("\nValor convertido: %.2fK", result);
    break;

    case 3: 
    result = (valor-32)*5/9;
    printf("\nValor convertido: %.2fC", result);
    break;

    case 4: 
    result = (valor-32)*5/9+273.15;
    printf("\nValor convertido: %.2fK", result);
    break;


    case 5: 
    result = valor-273.15;
    printf("\nValor convertido: %.2fC", result);
    break;

    case 6: 
    result = (valor-273.15)*9/5+32;
    printf("\nValor convertido: %.2fF", result);
    break;

    default:
    printf("\nValor invalido!");
    break;
  }

}

void tempo(){}

int main(){

  int opcao;
  float valor;

    do{
    printf("======MENU======\n");
    printf("Insira a opcao que deseja:\n");
    printf("1-Unidades de comprimento:\n");
    printf("2-Unidades de massa:\n");
    printf("3-Unidades de volume:\n");
    printf("4-Unidades de temperatura:\n");
    printf("5-Unidades de tempo:\n");
    printf("=================\n");
        scanf("%d", &opcao);

    }while(opcao<1 || opcao>5);

    printf("Insira o valor para conversao:");
      scanf("%f", &valor);

    
   switch(opcao){
      case 1: 
      comprimento(valor);
      break;
      case 2:
      massa(valor);
      break;
      case 3:
      volume(valor);
      break;
      case 4:
      temperatura(valor);
      break;
      case 5:
      tempo(valor);
      break;
      default:
      printf("\nValor invalido!!");
      break;

    }

}
