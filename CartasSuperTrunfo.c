#include <stdio.h>

int main() {
    // Variáveis para armazenar os atributos de uma cidade
    char codigo[4];  // Código da cidade (por exemplo, A01, B02)
    char nome[50];   // Nome da cidade
    int populacao;   // População da cidade
    float area;      // Área da cidade em km²
    float pib;       // PIB da cidade em bilhões
    int pontosTuristicos; // Número de pontos turísticos

    // Variáveis para propriedades calculadas
    float densidadePopulacional;  // Densidade Populacional
    float pibPerCapita;           // PIB per Capita

    // Solicita ao usuário que insira os dados da cidade
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%3s", codigo);  // Limita a entrada a 3 caracteres

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome);  // Lê até a nova linha para suportar nomes com espaços

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Calcula a Densidade Populacional e o PIB per Capita
    densidadePopulacional = populacao / area;
    pibPerCapita = (pib * 1e9) / populacao;  // Converte PIB para unidades de moeda antes de dividir

    // Exibe os dados cadastrados da cidade, incluindo as novas propriedades calculadas
    printf("\nDados da cidade cadastrada:\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f unidades monetárias\n", pibPerCapita);

    return 0;
}