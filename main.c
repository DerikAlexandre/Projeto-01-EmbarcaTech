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
void temperatura(float valor){

  int selecao;
  float result;
  printf("\n\n===CONVERSAO DE TEMPERATURA:===\n\n");
  printf("1-Celsius -> Fahrenheit\n");
  printf("2-Celsius -> Kelvin    \n");
  printf("3-Fahrenheit -> Celsius\n");
  printf("4-Fahrenheit -> Kelvin \n");
  printf("5-Kelvin -> Celsius    \n");
  printf("6-Kelvin -> Fahrenheit \n");
  printf("\n=====================\n");
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

void tempo(float valor)
{
}

void velocidade(float valor)
{
  int opcao;
  float valorConvertido;

  printf("\n================ CONVERSAO DE VELOCIDADE ================\n");
  printf(" Escolha a conversao desejada:                        \n");
  printf(" 1 - Metros por segundo (m/s) -> Kilometros por hora (km/h) \n");
  printf(" 2 - Metros por segundo (m/s) -> Milhas por hora (mph) \n");
  printf(" 3 - Kilometros por hora (km/h) -> Metros por segundo (m/s) \n");
  printf(" 4 - Kilometros por hora (km/h) -> Milhas por hora (mph) \n");
  printf(" 5 - Milhas por hora (mph) -> Kilometros por hora (km/h) \n");
  printf(" 6 - Milhas por hora (mph) -> Metros por segundo (m/s)\n");
  printf("=========================================================\n");
  printf("Digite sua opcao: ");
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

  printf("\n================ CONVERSAO DE POTENCIA ================\n");
  printf(" Escolha a conversão desejada:                      \n");
  printf(" 1 - Watts (W) -> Kilowatts (kW)                    \n");
  printf(" 2 - Watts (W) -> Cavalo-vapor (cv)                 \n");
  printf(" 3 - Kilowatts (kW) -> Watts (W)                    \n");
  printf(" 4 - Kilowatts (kW) -> Cavalo-vapor (cv)            \n");
  printf(" 5 - Cavalo-vapor (cv) -> Watts (W)                 \n");
  printf(" 6 - Cavalo-vapor (cv) -> Kilowatts (kW)            \n");
  printf("======================================================\n");
  printf("Digite sua opcao: ");
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
    printf("\nOpcao invalida!\n");
    return;
  }
}

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
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);
  } while (opcao < 1 || opcao > 7);

  printf("\nDigite o valor para conversao: ");
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
    printf("\nOpcao invalida!\n");
    break;
  }

  return 0;
}


