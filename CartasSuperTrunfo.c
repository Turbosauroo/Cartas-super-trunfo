#include <stdio.h>

int main() {
    // Cabeçalho do programa
    printf("\n*** DESAFIO SUPER TRUNFO ***\n");

    // Declaração das variáveis para as duas cartas
    char estado_1, estado_2;  
    char codigo_da_carta_1[20], codigo_da_carta_2[20];
    char nome_da_cidade_1[50], nome_da_cidade_2[50];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int pontos_turisticos_1, pontos_turisticos_2;
    float densidade1, perCapita1;
    float densidade2, perCapita2;
    
    // Variáveis para o Super Poder de cada carta
    float soma_variavel1, soma_variavel2;
    float super_poder1, super_poder2;
    
    /*---------------------------------------------------------
      Entrada de dados para a Carta 1
    ---------------------------------------------------------*/
    printf("\n*** Digite os dados da Carta 1 ***\n");
    
    printf("\nUma letra de 'A' a 'H': \n");
    scanf(" %c", &estado_1);
    
    printf("A letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", codigo_da_carta_1);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_da_cidade_1);
    
    printf("Digite a população: \n");
    scanf("%d", &populacao_1);
    
    printf("Digite a área: \n");
    scanf("%f", &area_1);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib_1);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_1);
    
    // Cálculo da densidade e do PIB per Capita para Carta 1
    densidade1 = populacao_1 / area_1;
    perCapita1 = pib_1 / populacao_1;
    
    /*---------------------------------------------------------
      Entrada de dados para a Carta 2
    ---------------------------------------------------------*/
    printf("\n*** Digite os dados da Carta 2 ***\n");
    
    printf("\nUma letra de 'A' a 'H': \n");
    scanf(" %c", &estado_2);
    
    printf("A letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", codigo_da_carta_2);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_da_cidade_2);
    
    printf("Digite a população: \n");
    scanf("%d", &populacao_2);
    
    printf("Digite a área: \n");
    scanf("%f", &area_2);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib_2);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_2);
    
    // Cálculo da densidade e do PIB per Capita para Carta 2
    densidade2 = populacao_2 / area_2;
    perCapita2 = pib_2 / populacao_2;
    
    /*---------------------------------------------------------
      Exibição dos dados coletados para as Cartas
    ---------------------------------------------------------*/
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Código: %s\n", codigo_da_carta_1);
    printf("Estado: %c\n", estado_1);
    printf("Cidade: %s\n", nome_da_cidade_1);
    printf("População: %d habitantes\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib_1);
    printf("Pontos turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f Reais\n", perCapita1);
    
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Código: %s\n", codigo_da_carta_2);
    printf("Estado: %c\n", estado_2);
    printf("Cidade: %s\n", nome_da_cidade_2);
    printf("População: %d habitantes\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib_2);
    printf("Pontos turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f Reais\n", perCapita2);
    
    /*---------------------------------------------------------
      Cálculo do Super Poder para cada carta
      Super Poder = população + área + PIB + pontos turísticos + PIB per Capita + (1 / densidade)
    ---------------------------------------------------------*/
    soma_variavel1 = populacao_1 + area_1 + pib_1 + pontos_turisticos_1;
    soma_variavel2 = populacao_2 + area_2 + pib_2 + pontos_turisticos_2;
    
    super_poder1 = soma_variavel1 + perCapita1 + (1.0f / densidade1);
    super_poder2 = soma_variavel2 + perCapita2 + (1.0f / densidade2);
    
    /*---------------------------------------------------------
      Exibir os Resultados das Comparações
      Regras:
         - Para População, Área, PIB, Pontos Turísticos, PIB per Capita e Super Poder: 
              Carta com maior valor vence.
         - Para Densidade Populacional:
              Carta com menor valor vence.
         
      Como não podemos usar if/else, usamos a seguinte técnica:
         (condição) retorna 1 se verdadeira e 0 se falsa.
         Para exibir qual carta venceu, usamos a expressão: 2 - (condição)
         Por exemplo, para população:
            Se (populacao_1 > populacao_2) for verdadeira (1), então:
                2 - 1 = 1  ? Carta 1 vence.
            Se for falsa (0), então:
                2 - 0 = 2  ? Carta 2 vence.
    ---------------------------------------------------------*/
    printf("\n*** Comparação de Cartas ***\n");
    
    // População
    printf("População: Carta %d venceu (%d)\n", 2 - (populacao_1 > populacao_2), (populacao_1 > populacao_2));
    
    // Área
    printf("Área: Carta %d venceu (%d)\n", 2 - (area_1 > area_2), (area_1 > area_2));
    
    // PIB
    printf("PIB: Carta %d venceu (%d)\n", 2 - (pib_1 > pib_2), (pib_1 > pib_2));
    
    // Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 2 - (pontos_turisticos_1 > pontos_turisticos_2), (pontos_turisticos_1 > pontos_turisticos_2));
    
    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - (densidade1 < densidade2), (densidade1 < densidade2));
    
    // PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - (perCapita1 > perCapita2), (perCapita1 > perCapita2));
    
    // Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n", 2 - (super_poder1 > super_poder2), (super_poder1 > super_poder2));
    
    return 0;
}

