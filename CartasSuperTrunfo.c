#include <stdio.h>

int main() {
    // Carta 1: Salvador
    char estado1[40] = "Bahia";
    char cidade1[30] = "Salvador";
    int populacao1 = 14140000; // População em número inteiro
    float area1 = 567.292;
    float PIB1 = 352.61;
    int pontos1 = 13;
    char codigo1[10] = "BA01"; // Código manual

    // Carta 2: Medellín
    char estado2[40] = "Antioquia";
    char cidade2[30] = "Medellín";
    int populacao2 = 2500000; // População em número inteiro
    float area2 = 380.64;
    float PIB2 = 120.45;
    int pontos2 = 10;
    char codigo2[10] = "AN02"; // Código manual

    // Exibindo as informações da Carta 1 (Salvador)
    printf("Carta 1: Salvador\n");
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("\n"); // Linha em branco para separar as cartas

    // Exibindo as informações da Carta 2 (Medellín)
    printf("Carta 2: Medellín\n");
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontos2);

    return 0;
}
