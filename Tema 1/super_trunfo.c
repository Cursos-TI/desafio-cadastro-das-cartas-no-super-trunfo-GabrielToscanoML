#include <stdio.h>

float calculaSuperPoder(int pontos_turisticos, int populacao, float area, float pib, float densidade_populacional, float pib_per_capita);

int main() {
    
    // carta 1
    char carta1_estado, carta1_codigo_cidade[4], carta1_nome_cidade[50];
    int carta1_pontos_turisticos;
    unsigned long int carta1_populacao;
    float carta1_area, carta1_pib, carta1_densidade_populacional, carta1_pib_per_capita, carta1_super_poder;

    // carta 2
    char carta2_estado, carta2_codigo_cidade[4], carta2_nome_cidade[50];
    int carta2_pontos_turisticos;
    unsigned long int carta2_populacao;
    float carta2_area, carta2_pib, carta2_densidade_populacional, carta2_pib_per_capita, carta2_super_poder;

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

    carta1_super_poder = calculaSuperPoder(carta1_pontos_turisticos, carta1_populacao, carta1_area, carta1_pib, carta1_densidade_populacional, carta1_pib_per_capita);

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

    carta2_super_poder = calculaSuperPoder(carta2_pontos_turisticos, carta2_populacao, carta2_area, carta2_pib, carta2_densidade_populacional, carta2_pib_per_capita);

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
    printf("Super Poder: %.2f\n", carta1_super_poder);

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
    printf("Super Poder: %.2f\n", carta2_super_poder);

    printf("\nComparação de Cartas:\n");
    
    // compara população
    if (carta1_populacao > carta2_populacao) {
        printf("População: Carta 1 venceu (1)\n");
    } else {
        printf("População: Carta 2 venceu (0)\n");
    }

    // compara area
    if (carta1_area > carta2_area) {
        printf("Área: Carta 1 venceu (1)\n");
    } else {
        printf("Área: Carta 2 venceu (0)\n");
    }

    // compara pib
    if (carta1_pib > carta2_pib) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }

    // compara quantidade de pontos turísticos
    if (carta1_pontos_turisticos > carta2_pontos_turisticos) {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    }

    // compara densidade populacional
    if (carta1_densidade_populacional < carta2_densidade_populacional) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    // compara pib per capita
    if (carta1_pib_per_capita > carta2_pib_per_capita) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }

    // compara super poder
    if (carta1_super_poder > carta2_super_poder) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }

    return 0;
}

float calculaSuperPoder(int pontos_turisticos, int populacao, float area, float pib, float densidade_populacional, float pib_per_capita) {
    float resultado;

    resultado = (float)(pontos_turisticos + populacao) + (area + pib + pib_per_capita - densidade_populacional);

    return resultado;
}