#include <stdio.h>

void comprimento(float valor);
void massa(float valor);
void volume(float valor);
void temperatura(float valor);
void tempo(float valor);
void velocidade(float valor);
void potencia(float valor);

int main()
{
  int opcao;
  float valor;

  do
  {
    printf("======MENU======\n");
    printf("Insira a opcao que deseja:\n");
    printf("1-Unidades de comprimento:\n");
    printf("2-Unidades de massa:\n");
    printf("3-Unidades de volume:\n");
    printf("4-Unidades de temperatura:\n");
    printf("5-Unidades de tempo:\n");
    printf("6-Unidades de velocidade:\n");
    printf("7-Unidades de potência:\n");
    printf("=================\n");
    scanf("%d", &opcao);

  } while (opcao < 1 || opcao > 6);

  printf("Insira o valor para conversao: ");
  scanf("%f", &valor);

  switch (opcao)
  {
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
  case 6:
    velocidade(valor);
    break;
  case 7:
    potencia(valor);
    break;
  default:
    printf("\nValor invalido!!");
    break;
  }

  return 0;
}

void velocidade(float valor)
{
  int opcao;
  float valorConvertido;

  printf("Qual conversão você deseja fazer?:\n");
  printf("1 - Metros por segundo (m/s) para kilômetros por hora (km/h)\n");
  printf("2 - Metros por segundo (m/s) para milhas por hora (mph)\n");
  printf("3 - Kilômetros por hora (km/h) para metros por segundo (m/s)\n");
  printf("4 - Kilômetros por hora (km/h) para milhas por hora (mph)\n");
  printf("5 - Milhas por hora (mph) para kilômetros por hora (km/h)\n");
  printf("6 - Milhas por hora (mph) para metros por segundo (m/s)\n");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    valorConvertido = valor * 3.6;
    printf("Valor inicial: %.3f m/s. Valor convertido: %.3f km/h\n", valor, valorConvertido);
    break;
  case 2:
    valorConvertido = valor * 2.237;
    printf("Valor inicial: %.3f m/s. Valor convertido: %.3f mph\n", valor, valorConvertido);
    break;
  case 3:
    valorConvertido = valor / 3.6;
    printf("Valor inicial: %.3f km/h. Valor convertido: %.3f m/s\n", valor, valorConvertido);
    break;
  case 4:
    valorConvertido = valor / 1.609;
    printf("Valor inicial: %.3f km/h. Valor convertido: %.3f mph\n", valor, valorConvertido);
    break;
  case 5:
    valorConvertido = valor * 1.609;
    printf("Valor inicial: %.3f mph. Valor convertido: %.3f km/h\n", valor, valorConvertido);
    break;
  case 6:
    valorConvertido = valor / 2.237;
    printf("Valor inicial: %.3f mph. Valor convertido: %.3f m/s\n", valor, valorConvertido);
    break;
  default:
    printf("Opção inválida!\n");
    return;
  }
}
void potencia(float valor)
{
  int opcao;
  float valorConvertido;

  printf("Qual conversão você deseja fazer?:\n");
  printf("1 - Watts (W) para kilowatts (kW)\n");
  printf("2 - Watts (W) para cavalo-vapor (cv)\n");
  printf("3 - Kilowatts (kW) para watts (W)\n");
  printf("4 - Kilowatts (kW) para cavalo-vapor (cv))\n");
  printf("5 - Cavalo-vapor (cv) para watts (W)\n");
  printf("6 - Cavalo-vapor (cv) para kilowatts (kW)\n");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    valorConvertido = valor / 1000;
    printf("Valor inicial: %.3f W. Valor convertido: %.3f kW\n", valor, valorConvertido);
    break;
  case 2:
    valorConvertido = valor / 735.5;
    printf("Valor inicial: %.3f W. Valor convertido: %.3f cv\n", valor, valorConvertido);
    break;
  case 3:
    valorConvertido = valor * 1000;
    printf("Valor inicial: %.3f kW. Valor convertido: %.3f W\n", valor, valorConvertido);
    break;
  case 4:
    valorConvertido = valor * 1.36;
    printf("Valor inicial: %.3f kW. Valor convertido: %.3f cv\n", valor, valorConvertido);
    break;
  case 5:
    valorConvertido = valor * 735.5;
    printf("Valor inicial: %.3f cv. Valor convertido: %.3f W\n", valor, valorConvertido);
    break;
  case 6:
    valorConvertido = valor / 1.36;
    printf("Valor inicial: %.3f cv. Valor convertido: %.3f kW\n", valor, valorConvertido);
    break;
  default:
    printf("Opção inválida!\n");
    return;
  }
}
