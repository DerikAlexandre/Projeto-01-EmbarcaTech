#include <stdio.h>

// Funções de conversão
double m_para_km(double m);
double m_para_cm(double m);
double m_para_mm(double m);
double km_para_m(double km);
double km_para_cm(double km);
double km_para_mm(double km);
double cm_para_m(double cm);
double cm_para_km(double cm);
double cm_para_mm(double cm);
double mm_para_km(double mm);
double mm_para_m(double mm);
double mm_para_cm(double mm);

int main() {
    int escolha;
    double valor, resultado;

    printf("Escolha a conversão que deseja realizar:\n");
    printf("1 - Metros (m) para Quilômetros (Km) \n");
    printf("2 - Metros (m) para Centímetros (cm) \n");
    printf("3 - Metros (m) para Milímetros (mm) \n");
    printf("4 - Quilômetros (Km) para Metros (m) \n");
    printf("5 - Quilômetros (Km) para Centímetros (cm) \n");
    printf("6 - Quilômetros (Km) para Milímetros (mm) \n");
    printf("7 - Centímetros (cm) para Metros (m) \n");
    printf("8 - Centímetros (cm) para Quilômetros (Km)\n");
    printf("9 - Centímetros (cm) para Milímetros (mm) \n");
    printf("10 - Milímetros (mm) para Quilômetros (Km)\n");
    printf("11 - Milímetros (mm) para Metros (m) \n");
    printf("12 - Milímetros (mm) para Centímetros (cm) \n");
    printf("Escolha uma opção (1-12): \n");
    scanf("%d", &escolha);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    // Realiza a conversão escolhida
    switch (escolha) {
        case 1: resultado = m_para_km(valor); break;
        case 2: resultado = m_para_cm(valor); break;
        case 3: resultado = m_para_mm(valor); break;
        case 4: resultado = km_para_m(valor); break;
        case 5: resultado = km_para_cm(valor); break;
        case 6: resultado = km_para_mm(valor); break;
        case 7: resultado = cm_para_m(valor); break;
        case 8: resultado = cm_para_km(valor); break;
        case 9: resultado = cm_para_mm(valor); break;
        case 10: resultado = mm_para_km(valor); break;
        case 11: resultado = mm_para_m(valor); break;
        case 12: resultado = mm_para_cm(valor); break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Exibe o resultado
    printf("Resultado: %.6f\n", resultado);

    return 0;
}

// Implementação das funções de conversão
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
