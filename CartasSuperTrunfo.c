#include <stdio.h>

// Função para solicitar e ler os dados da cidade
void lerDadosCidade(char codigo[], char nome[], int *populacao, float *area, float *pib, int *pontos_turisticos) {
    printf("Cadastro de Cidade\n");

    // Solicita o código da cidade
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo);

    // Solicita o nome da cidade
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome); // Lê a linha inteira incluindo espaços

    // Solicita a população da cidade
    printf("Digite a população da cidade: ");
    scanf("%d", populacao);

    // Solicita a área da cidade
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", area);

    // Solicita o PIB da cidade
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", pib);

    // Solicita o número de pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", pontos_turisticos);
}

// Função para calcular a densidade populacional
float calcularDensidadePopulacional(int populacao, float area) {
    return (float) populacao / area;
}

// Função para calcular o PIB per capita
float calcularPIBPerCapita(float pib, int populacao) {
    return (pib * 1000000) / populacao; // Convertendo PIB para unidades monetárias
}

// Função para exibir os dados da cidade
void exibirDadosCidade(char codigo[], char nome[], int populacao, float area, float pib, int pontos_turisticos, float densidade_populacional, float pib_per_capita) {
    printf("\nDados da Cidade Cadastrada:\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", pib_per_capita);
}

int main() {
    // Definindo variáveis para os atributos da cidade
    char codigo[4]; // Código da cidade (ex: A01)
    char nome[50];  // Nome da cidade
    int populacao;  // População da cidade
    float area;     // Área da cidade em km²
    float pib;      // PIB da cidade em milhões
    int pontos_turisticos; // Número de pontos turísticos
    float densidade_populacional; // Densidade populacional
    float pib_per_capita; // PIB per capita

    // Ler os dados da cidade
    lerDadosCidade(codigo, nome, &populacao, &area, &pib, &pontos_turisticos);

    // Calcular densidade populacional e PIB per capita
    densidade_populacional = calcularDensidadePopulacional(populacao, area);
    pib_per_capita = calcularPIBPerCapita(pib, populacao);

    // Exibir os dados da cidade
    exibirDadosCidade(codigo, nome, populacao, area, pib, pontos_turisticos, densidade_populacional, pib_per_capita);

    return 0;
}