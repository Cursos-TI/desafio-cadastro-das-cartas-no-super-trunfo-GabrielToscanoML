#include <stdio.h>

int main() {
    
    // carta 1
    char carta1_estado, carta1_codigo_cidade[4], carta1_nome_cidade[50];
    int carta1_pontos_turisticos;
    unsigned long int carta1_populacao;
    float carta1_area, carta1_pib, carta1_densidade_populacional, carta1_pib_per_capita;

    // carta 2
    char carta2_estado, carta2_codigo_cidade[4], carta2_nome_cidade[50];
    int carta2_pontos_turisticos;
    unsigned long int carta2_populacao;
    float carta2_area, carta2_pib, carta2_densidade_populacional, carta2_pib_per_capita;

    printf("Cadastro das Cartas \n\n");

    // Pegando os dados da primeira carta
    printf("Cadastrando a primeira carta: \n\n");

    printf("Digite a letra correspondente ao estado ('A' a 'H'): \n");
    scanf(" %c", &carta1_estado);

    printf("Digite o código da cidade: \n");
    scanf("%s", carta1_codigo_cidade);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", carta1_nome_cidade);
    
    printf("Digite a população da cidade: \n");
    scanf("%lu", &carta1_populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &carta1_area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &carta1_pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &carta1_pontos_turisticos);

    carta1_densidade_populacional = carta1_populacao / carta1_area;
    carta1_pib_per_capita = (carta1_pib * 1000000000) / carta1_populacao;

    printf("Pib per capita %.2f\n", carta1_pib_per_capita);

    // Pegando os dados da segunda carta
    printf("\nCadastrando a segunda carta: \n\n");

    printf("Digite a letra correspondente ao estado ('A' a 'H'): \n");
    scanf(" %c", &carta2_estado);

    printf("Digite o código da cidade: \n");
    scanf("%s", carta2_codigo_cidade);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", carta2_nome_cidade);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &carta2_populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &carta2_area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &carta2_pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &carta2_pontos_turisticos);

    carta2_densidade_populacional = carta2_populacao / carta2_area;
    carta2_pib_per_capita = (carta2_pib * 1000000000) / carta2_populacao;

    printf("\nExibindo os dados das duas cartas: \n\n");

    printf("Dados da primeira carta:\n");
    printf("Estado: %c\n", carta1_estado);
    printf("Código: %s\n", carta1_codigo_cidade);
    printf("Nome da Cidade: %s\n", carta1_nome_cidade);
    printf("População: %lu\n", carta1_populacao);
    printf("Área: %.2f km²\n", carta1_area);
    printf("PIB: %.2f bilhões de reais\n", carta1_pib);
    printf("Número de Pontos Turísticos: %d\n", carta1_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1_densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta1_pib_per_capita);

    printf("\nDados da segunda carta:\n");
    printf("Estado: %c\n", carta2_estado);
    printf("Código: %s\n", carta2_codigo_cidade);
    printf("Nome da Cidade: %s\n", carta2_nome_cidade);
    printf("População: %lu\n", carta2_populacao);
    printf("Área: %.2f km²\n", carta2_area);
    printf("PIB: %.2f bilhões de reais\n", carta2_pib);
    printf("Número de Pontos Turísticos: %d\n", carta2_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2_densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta2_pib_per_capita);

    return 0;
}
