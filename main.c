#include <stdio.h>

void comprimento(float valor)
{
}
void massa(float valor)
{
}
void volume(float valor)
{
}
void temperatura(float valor)
{
}
void tempo(float valor)
{
}
void velocidade(float valor);
void potencia(float valor);

int main()
{
  int opcao;
  float valor;

  do
  {
    printf("\n======================== MENU ========================\n");
    printf(" Escolha a opção desejada:                         \n");
    printf(" 1 - Unidades de comprimento                       \n");
    printf(" 2 - Unidades de massa                             \n");
    printf(" 3 - Unidades de volume                            \n");
    printf(" 4 - Unidades de temperatura                       \n");
    printf(" 5 - Unidades de tempo                             \n");
    printf(" 6 - Unidades de velocidade                        \n");
    printf(" 7 - Unidades de potência                          \n");
    printf("=====================================================\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);
  } while (opcao < 1 || opcao > 7);

  printf("\nDigite o valor para conversão: ");
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
    printf("\nOpção inválida!\n");
    break;
  }

  return 0;
}

void velocidade(float valor)
{
  int opcao;
  float valorConvertido;

  printf("\n================ CONVERSÃO DE VELOCIDADE ================\n");
  printf(" Escolha a conversão desejada:                        \n");
  printf(" 1 - Metros por segundo (m/s) -> Kilômetros por hora (km/h) \n");
  printf(" 2 - Metros por segundo (m/s) -> Milhas por hora (mph) \n");
  printf(" 3 - Kilômetros por hora (km/h) -> Metros por segundo (m/s) \n");
  printf(" 4 - Kilômetros por hora (km/h) -> Milhas por hora (mph) \n");
  printf(" 5 - Milhas por hora (mph) -> Kilômetros por hora (km/h) \n");
  printf(" 6 - Milhas por hora (mph) -> Metros por segundo (m/s)\n");
  printf("=========================================================\n");
  printf("Digite sua opção: ");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    valorConvertido = valor * 3.6;
    printf("\nResultado: %.3f m/s = %.3f km/h\n", valor, valorConvertido);
    break;
  case 2:
    valorConvertido = valor * 2.237;
    printf("\nResultado: %.3f m/s = %.3f mph\n", valor, valorConvertido);
    break;
  case 3:
    valorConvertido = valor / 3.6;
    printf("\nResultado: %.3f km/h = %.3f m/s\n", valor, valorConvertido);
    break;
  case 4:
    valorConvertido = valor / 1.609;
    printf("\nResultado: %.3f km/h = %.3f mph\n", valor, valorConvertido);
    break;
  case 5:
    valorConvertido = valor * 1.609;
    printf("\nResultado: %.3f mph = %.3f km/h\n", valor, valorConvertido);
    break;
  case 6:
    valorConvertido = valor / 2.237;
    printf("\nResultado: %.3f mph = %.3f m/s\n", valor, valorConvertido);
    break;
  default:
    printf("\nOpção inválida!\n");
    return;
  }
}

void potencia(float valor)
{
  int opcao;
  float valorConvertido;

  printf("\n================ CONVERSÃO DE POTÊNCIA ================\n");
  printf(" Escolha a conversão desejada:                      \n");
  printf(" 1 - Watts (W) -> Kilowatts (kW)                    \n");
  printf(" 2 - Watts (W) -> Cavalo-vapor (cv)                 \n");
  printf(" 3 - Kilowatts (kW) -> Watts (W)                    \n");
  printf(" 4 - Kilowatts (kW) -> Cavalo-vapor (cv)            \n");
  printf(" 5 - Cavalo-vapor (cv) -> Watts (W)                 \n");
  printf(" 6 - Cavalo-vapor (cv) -> Kilowatts (kW)            \n");
  printf("======================================================\n");
  printf("Digite sua opção: ");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    valorConvertido = valor / 1000;
    printf("\nResultado: %.3f W = %.3f kW\n", valor, valorConvertido);
    break;
  case 2:
    valorConvertido = valor / 735.5;
    printf("\nResultado: %.3f W = %.3f cv\n", valor, valorConvertido);
    break;
  case 3:
    valorConvertido = valor * 1000;
    printf("\nResultado: %.3f kW = %.3f W\n", valor, valorConvertido);
    break;
  case 4:
    valorConvertido = valor * 1.36;
    printf("\nResultado: %.3f kW = %.3f cv\n", valor, valorConvertido);
    break;
  case 5:
    valorConvertido = valor * 735.5;
    printf("\nResultado: %.3f cv = %.3f W\n", valor, valorConvertido);
    break;
  case 6:
    valorConvertido = valor / 1.36;
    printf("\nResultado: %.3f cv = %.3f kW\n", valor, valorConvertido);
    break;
  default:
    printf("\nOpção inválida!\n");
    return;
  }
}
