#include <stdio.h>
#include<math.h>

// Funções de conversão para comprimento
double m_para_km(double m) { return m / 1000.0; }
double m_para_cm(double m) { return m * 100.0; }
double m_para_mm(double m) { return m * 1000.0; }
double km_para_m(double km) { return km * 1000.0; }
double km_para_cm(double km) { return km * 100000.0; }
double km_para_mm(double km) { return km * 1000000.0; }
double cm_para_m(double cm) { return cm / 100.0; }
double cm_para_km(double cm) { return cm / 100000.0; }
double cm_para_mm(double cm) { return cm * 10.0; }
double mm_para_km(double mm) { return mm / 1000000.0; }
double mm_para_m(double mm) { return mm / 1000.0; }
double mm_para_cm(double mm) { return mm / 10.0; }

void comprimento(float valor)
{
  int escolha;
  double resultado;

  printf("\n\n===== CONVERSAO DE COMPRIMENTO =====\n\n");
  printf("1 - Metros (m) -> Quilometros (Km)      \n");
  printf("2 - Metros (m) -> Centimetros (cm)      \n");
  printf("3 - Metros (m) -> Milimetros (mm)       \n");
  printf("4 - Quilometros (Km) -> Metros (m)      \n");
  printf("5 - Quilometros (Km) -> Centimetros (cm)\n");
  printf("6 - Quilometros (Km) -> Milimetros (mm) \n");
  printf("7 - Centimetros (cm) -> Metros (m)      \n");
  printf("8 - Centimetros (cm) -> Quilometros (Km)\n");
  printf("9 - Centimetros (cm) -> Milimetros (mm) \n");
  printf("10 - Milimetros (mm) -> Quilometros (Km)\n");
  printf("11 - Milimetros (mm) -> Metros (m)      \n");
  printf("12 - Milimetros (mm) -> Centimetros (cm)\n");
  printf("\n======================================\n");
  printf("Escolha uma opcao (1-12): \n");
  scanf("%d", &escolha);

  switch (escolha)
  {
  case 1:
    resultado = m_para_km(valor);
    break;
  case 2:
    resultado = m_para_cm(valor);
    break;
  case 3:
    resultado = m_para_mm(valor);
    break;
  case 4:
    resultado = km_para_m(valor);
    break;
  case 5:
    resultado = km_para_cm(valor);
    break;
  case 6:
    resultado = km_para_mm(valor);
    break;
  case 7:
    resultado = cm_para_m(valor);
    break;
  case 8:
    resultado = cm_para_km(valor);
    break;
  case 9:
    resultado = cm_para_mm(valor);
    break;
  case 10:
    resultado = mm_para_km(valor);
    break;
  case 11:
    resultado = mm_para_m(valor);
    break;
  case 12:
    resultado = mm_para_cm(valor);
    break;
  default:
    printf("Opcao invalida!\n");
    return;
  }

  printf("Resultado: %.6f\n", resultado);
}

void volume(double valor)
{
  int escolha;
  double resultado;

  printf("\n\n======= CONVERSAO DE VOLUME =======\n\n");
  printf("1 - Litros (L) -> Mililitros (mL)                    \n");
  printf("2 - Litros (L) -> Metros cubicos (m^3)                \n");
  printf("3 - Litros (L) -> Centimetros cubicos (cm^3)          \n");
  printf("4 - Mililitros (mL) -> Litros (L)                    \n");
  printf("5 - Mililitros (mL) -> Metros cubicos (m^3)           \n");
  printf("6 - Mililitros (mL) -> Centimetros cubicos (cm^3)     \n");
  printf("7 - Metros cubicos (m^3) -> Litros (L)                \n");
  printf("8 - Metros cubicos (m^3) -> Mililitros (mL)           \n");
  printf("9 - Metros cubicos (m^3) -> Centimetros cubicos (cm^3)\n");
  printf("10 - Centimetros cubicos (cm^3) -> Litros (L)         \n");
  printf("11 - Centimetros cubicos (cm^3) -> Mililitros (mL)    \n");
  printf("12 - Centimetros cubicos (cm^3) -> Metros cubicos (m^3)\n");
  printf("\n======================================\n");
  printf("Escolha uma opcao (1-12): \n");
  scanf("%d", &escolha);

  switch (escolha)
  {
  case 1:
    resultado = valor * 1000;
    break;
  case 2:
    resultado = valor / 1000;
    break;
  case 3:
    resultado = valor * 1000;
    break;
  case 4:
    resultado = valor / 1000;
    break;
  case 5:
    resultado = valor / 1000000;
    break;
  case 6:
    resultado = valor;
    break;
  case 7:
    resultado = valor * 1000;
    break;
  case 8:
    resultado = valor * 1000000;
    break;
  case 9:
    resultado = valor * 1000000;
    break;
  case 10:
    resultado = valor / 1000;
    break;
  case 12:
    resultado = valor / 1000000;
    break;
  default:
    printf("Opcao invalida!\n");
    return;
  }

  printf("Resultado: %.6f\n", resultado);
}

void massa(float valor)
{
  int medidaAtual, medidaASerConvertida;
  double valorConvertido;

  do
  {
    printf("\n\n===== CONVERSAO DE MASSA =====\n\n");
    printf("Em qual unidade de medida esta o valor que deseja converter?\n");
    printf("1 - Decagrama (dag)\n");
    printf("2 - Hectograma (hg)\n");
    printf("3 - Quilograma (kg)\n");
    printf("4 - Grama (g)      \n");
    printf("5 - Decigrama (dg) \n");
    printf("6 - Centigrama (cg)\n");
    printf("7 - Miligrama (mg) \n");
    printf("\n==============================\n");
    scanf("%d", &medidaAtual);

    if (medidaAtual < 1 || medidaAtual > 7)
    {
      printf("Opcao invalida. Tente novamente.\n");
    }
  } while (medidaAtual < 1 || medidaAtual > 7);

  do
  {
    printf("\n\n===== CONVERSAO DE MASSA =====\n\n");
    printf("Para qual unidade de medida deseja converter?\n");
    printf("1 - Decagrama (dag)\n");
    printf("2 - Hectograma (hg)\n");
    printf("3 - Quilograma (kg)\n");
    printf("4 - Grama (g)      \n");
    printf("5 - Decigrama (dg) \n");
    printf("6 - Centigrama (cg)\n");
    printf("7 - Miligrama (mg) \n");
    printf("\n==============================\n");
    scanf("%d", &medidaASerConvertida);

    if (medidaASerConvertida < 1 || medidaASerConvertida > 7)
    {
      printf("Opcao invalida. Tente novamente.\n");
    }
  } while (medidaASerConvertida < 1 || medidaASerConvertida > 7);

  double fatores[7] = {10.0, 100.0, 1000.0, 1.0, 0.1, 0.01, 0.001};

  valorConvertido = (valor * fatores[medidaAtual - 1]) / fatores[medidaASerConvertida - 1];

  printf("O valor %.2lf na unidade %d convertido para a unidade %d eh: %.5lf\n",
         valor, medidaAtual, medidaASerConvertida, valorConvertido);
}

void temperatura(float valor)
{

  int selecao;
  float result;
  printf("\n\n=== CONVERSAO DE TEMPERATURA ===\n\n");
  printf("1-Celsius    -> Fahrenheit\n");
  printf("2-Celsius    -> Kelvin    \n");
  printf("3-Fahrenheit -> Celsius   \n");
  printf("4-Fahrenheit -> Kelvin    \n");
  printf("5-Kelvin     -> Celsius   \n");
  printf("6-Kelvin     -> Fahrenheit\n");
  printf("\n=====================\n");
  scanf("%d", &selecao);

  switch (selecao)
  {
  case 1:
    result = valor * 9 / 5 + 32;
    printf("\nValor convertido: %.2fF", result);
    break;
  case 2:
    result = valor + 273.15;
    printf("\nValor convertido: %.2fK", result);
    break;
  case 3:
    result = (valor - 32) * 5 / 9;
    printf("\nValor convertido: %.2fC", result);
    break;
  case 4:
    result = (valor - 32) * 5 / 9 + 273.15;
    printf("\nValor convertido: %.2fK", result);
    break;
  case 5:
    result = valor - 273.15;
    printf("\nValor convertido: %.2fC", result);
    break;
  case 6:
    result = (valor - 273.15) * 9 / 5 + 32;
    printf("\nValor convertido: %.2fF", result);
    break;
  default:
    printf("\nValor invalido!");
    return;
  }
}

void velocidade(float valor)
{
  int opcao;
  float valorConvertido;

  printf("\n================ CONVERSAO DE VELOCIDADE ================\n");
  printf(" Escolha a conversao desejada:                        \n");
  printf(" 1 - Metros por segundo (m/s) -> Kilometros por hora (km/h) \n");
  printf(" 2 - Metros por segundo (m/s) -> Milhas por hora (mph)   \n");
  printf(" 3 - Kilometros por hora (km/h) -> Metros por segundo (m/s) \n");
  printf(" 4 - Kilometros por hora (km/h) -> Milhas por hora (mph) \n");
  printf(" 5 - Milhas por hora (mph) -> Kilometros por hora (km/h) \n");
  printf(" 6 - Milhas por hora (mph) -> Metros por segundo (m/s)   \n");
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
    printf("\nOpcao invalida!\n");
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

void dados(double valor) {
    int unidadeOrigem, unidadeDestino;
    double fatores[6] = {1.0, 8.0, 8192.0, 8388608.0, 8589934592.0, 8796093022208.0}; // Fatores de conversão

    printf("\n================ CONVERSAO DE DADOS =================\n");
    printf(" Escolha a unidade de origem:                       \n");
    printf(" 1 - Bits                                           \n");
    printf(" 2 - Bytes                                          \n");
    printf(" 3 - Kilobytes                                      \n");
    printf(" 4 - Megabytes                                      \n");
    printf(" 5 - Gigabytes                                      \n");
    printf(" 6 - Terabytes                                      \n");
    printf("=====================================================\n");
    printf("Digite sua opcao (1-6): ");

    if (scanf("%d", &unidadeOrigem) != 1 || unidadeOrigem < 1 || unidadeOrigem > 6) {
        printf("Unidade de origem invalida! Tente novamente.\n");
        while (getchar() != '\n'); // Limpa o buffer de entrada
        return;
    }

    printf("\nEscolha a unidade de destino:                      \n");
    printf(" 1 - Bits                                           \n");
    printf(" 2 - Bytes                                          \n");
    printf(" 3 - Kilobytes                                      \n");
    printf(" 4 - Megabytes                                      \n");
    printf(" 5 - Gigabytes                                      \n");
    printf(" 6 - Terabytes                                      \n");
    printf("=====================================================\n");
    printf("Digite sua opcao (1-6): ");

    if (scanf("%d", &unidadeDestino) != 1 || unidadeDestino < 1 || unidadeDestino > 6) {
        printf("Unidade de destino invalida! Tente novamente.\n");
        while (getchar() != '\n'); // Limpa o buffer de entrada
        return;
    }

    // Cálculo da conversão
    double resultado = (valor * fatores[unidadeOrigem - 1]) / fatores[unidadeDestino - 1];

    // Exibir o resultado
    printf("\n%.6lf na unidade %d convertido para a unidade %d eh: %.6lf\n",
           valor, unidadeOrigem, unidadeDestino, resultado);
}

void area(float valor)
{
  int medidaAtual, medidaASerConvertida;
  double valorConvertido;

  do
  {
    printf("\n\n===== CONVERSAO DE AREA =====\n\n");
    printf("Em qual unidade de medida esta o valor que deseja converter?\n");
    printf("1 - kilometros quadrado\n");
    printf("2 - hectometros quadrado\n");
    printf("3 - decametros quadrado\n");
    printf("4 - metros quadrado \n");
    printf("5 - decimetros quadrado \n");
    printf("6 - centimetros quadrado\n");
    printf("7 - milimetros quadrado \n");
    printf("\n==============================\n");
    scanf("%d", &medidaAtual);

    if (medidaAtual < 1 || medidaAtual > 7)
    {
      printf("Opcao invalida. Tente novamente.\n");
    }
  } while (medidaAtual < 1 || medidaAtual > 7);

  do
  {
    printf("\n\n===== CONVERSAO DE AREA =====\n\n");
    printf("Em qual unidade de medida esta o valor que deseja converter?\n");
    printf("1 - kilometros quadrado\n");
    printf("2 - hectometros quadrado\n");
    printf("3 - decametros quadrado\n");
    printf("4 - metros quadrado \n");
    printf("5 - decimetros quadrado \n");
    printf("6 - centimetros quadrado\n");
    printf("7 - milimetros quadrado \n");
    printf("\n==============================\n");
    scanf("%d", &medidaASerConvertida);

    if (medidaASerConvertida < 1 || medidaASerConvertida > 7)
    {
      printf("Opcao invalida. Tente novamente.\n");
    }
  } while (medidaASerConvertida < 1 || medidaASerConvertida > 7);

  double fatores[7] = {1000000, 10000, 100, 1, 0.01, 0.0001, 0.000001};

  valorConvertido = (valor * fatores[medidaAtual - 1]) / fatores[medidaASerConvertida - 1];

  printf("O valor %.2lf na unidade %d convertido para a unidade %d eh: %.12lf\n",
         valor, medidaAtual, medidaASerConvertida, valorConvertido);
}

void tempo(float valor)
{

  int selecao;
  float result;
  printf("\n\n=== CONVERSAO DE TEMPO ===\n\n");
  printf("1-Segundos -> Minutos \n");
  printf("2-Segundos -> Horas   \n");
  printf("3-Minutos  -> Segundos\n");
  printf("4-Minutos  -> Horas   \n");
  printf("5-Horas    -> Segundos\n");
  printf("6-Horas    -> Minutos \n");
  printf("\n=====================\n");
  scanf("%d", &selecao);

  switch (selecao)
  {
  case 1:
    result = valor/60;
    printf("\nValor convertido: %.5f minutos.\n", result);
    break;
  case 2:
    result = valor/3600;
    printf("\nValor convertido: %.5f horas.\n", result);
    break;
  case 3:
    result = valor*60;
    printf("\nValor convertido: %.5f segundos.\n", result);
    break;
  case 4:
    result = valor/60;
    printf("\nValor convertido: %.5f horas.\n", result);
    break;
  case 5:
    result = valor*3600;
    printf("\nValor convertido: %.5f segundos.\n", result);
    break;
  case 6:
    result = valor*60;
    printf("\nValor convertido: %.5f minutos.\n", result);
    break;
  default:
    printf("\nValor invalido!");
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
printf(" Escolha a opcao desejada:                         \n");
printf(" 1 - Unidades de comprimento                       \n");
printf(" 2 - Unidades de massa                             \n");
printf(" 3 - Unidades de temperatura                       \n");
printf(" 4 - Unidades de velocidade                        \n");
printf(" 5 - Unidades de potencia                          \n");
printf(" 6 - Unidades de volume                            \n");
printf(" 7 - Unidades de dados                             \n");
printf(" 8 - Unidades de area                              \n");
printf(" 9 - Unidades de tempo                             \n");
printf(" 10 - Sair                                         \n");
printf("=====================================================\n");

    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    if (opcao == 10)
    {
      printf("\nSaindo, ate logo...\n");
      break;
    }

    if (opcao < 1 || opcao > 10)
    {
      printf("\nOpcao invalida!\n");
      continue;
    }

    printf("\nInsira o valor para conversao: ");
    scanf("%f", &valor);

    switch (opcao) {
    case 1:
        comprimento(valor);
        break;
    case 2:
        massa(valor);
        break;
    case 3:
        temperatura(valor);
        break;
    case 4:
        velocidade(valor);
        break;
    case 5:
        potencia(valor);
        break;
    case 6:
        volume(valor);
        break;
    case 7:
        dados(valor); // Chamada para a nova função
        break;
    case 8:
        area(valor);  
        break;
    case 9:
        tempo(valor);  
        break;
    case 10:
        printf("\n Saindo, ate logo...\n");
        break;
    default:
        printf("\nOpcao invalida!\n");
}

  } while (opcao != 10);

  return 0;
}
