#include<stdio.h>

void comprimento(){}

void massa(){}

void volume(){}

void temperatura(){}

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
