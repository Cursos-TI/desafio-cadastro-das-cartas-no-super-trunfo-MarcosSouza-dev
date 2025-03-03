#include <stdio.h>

#define NUM_CARTAS 2  // Definir o número de cartas a serem cadastradas

int main() {
    // Definição das variáveis para os atributos das cartas
    char estado[NUM_CARTAS];  // Estado das cidades
    char codigo[NUM_CARTAS][4];  // Código da carta (ex: A01, B02)
    char nome[NUM_CARTAS][50];  // Nome das cidades
    int populacao[NUM_CARTAS];  // População das cidades
    float area[NUM_CARTAS];  // Área das cidades em km²
    float pib[NUM_CARTAS];  // PIB das cidades em bilhões de reais
    int pontos_turisticos[NUM_CARTAS];  // Número de pontos turísticos das cidades

    // Cadastro das cartas
    for (int i = 0; i < NUM_CARTAS; i++) {
        printf("\nCadastro da Carta %d\n", i + 1);

        // Entrada de dados para cada carta
        printf("Digite o estado da cidade (A a H): ");
        scanf(" %c", &estado[i]);

        printf("Digite o código da carta (ex: A01, B03): ");
        scanf("%s", codigo[i]);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", nome[i]);  // Permite espaços no nome

        printf("Digite a população da cidade: ");
        scanf("%d", &populacao[i]);

        printf("Digite a área da cidade (em km²): ");
        scanf("%f", &area[i]);

        printf("Digite o PIB da cidade (em bilhões de reais): ");
        scanf("%f", &pib[i]);

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontos_turisticos[i]);
    }

    // Exibição das cartas cadastradas
    printf("\n--- Cartas Cadastradas ---\n");
    for (int i = 0; i < NUM_CARTAS; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Estado: %c\n", estado[i]);
        printf("Código: %s\n", codigo[i]);
        printf("Nome da Cidade: %s\n", nome[i]);
        printf("População: %d habitantes\n", populacao[i]);
        printf("Área: %.2f km²\n", area[i]);
        printf("PIB: %.2f bilhões de reais\n", pib[i]);
        printf("Número de Pontos Turísticos: %d\n", pontos_turisticos[i]);
    }

    return 0;
}


