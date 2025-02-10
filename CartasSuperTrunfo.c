#include <stdio.h>

int main() {
    // Definindo variáveis para os atributos da cidade
    char codigo[4]; // Código da cidade (ex: A01)
    char nome[50];  // Nome da cidade
    int populacao;  // População da cidade
    float area;     // Área da cidade em km²
    float pib;      // PIB da cidade em milhões
    int pontos_turisticos; // Número de pontos turísticos

    // Cadastro das Cartas
    printf("Cadastro de Cidade\n");

    // Solicita o código da cidade
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo);

    // Solicita o nome da cidade
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome); // Lê a linha inteira incluindo espaços

    // Solicita a população da cidade
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    // Solicita a área da cidade
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    // Solicita o PIB da cidade
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib);

    // Solicita o número de pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos Dados das Cartas
    printf("\nDados da Cidade Cadastrada:\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    //teste de commit
    return 0;
}