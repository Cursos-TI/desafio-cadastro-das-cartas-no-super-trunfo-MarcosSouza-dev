#include <stdio.h>

int main() {
    // Definição das variáveis para os atributos da cidade
    int codigo;
    char nome[50];  
    int populacao;
    float area, pib;
    int pontos_turisticos;

    // Entrada de dados
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%49s", nome);  // Evita estouro de buffer

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos dados cadastrados
    printf("\n--- Dados da Cidade ---\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}

