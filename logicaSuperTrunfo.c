#include <stdio.h>
 
int main() {
    // definição das variáveis
    char estado1[4];
    char codigo_cidade1[6];
    char nome_cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    char estado2[4];
    char codigo_cidade2[6];
    char nome_cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;


    // entrada dos dados da carta 1
    printf("Digite a sigla do estado: ");
    scanf(" %s", &estado1);

    printf("Digite o código da cidade: ");
    scanf (" %s", &codigo_cidade1);

    printf("Digite o nome da cidade: ");
    scanf (" %s", &nome_cidade1);

    printf("Informe a população da cidade: ");
    scanf (" %d", &populacao1);

    printf("Informe a área da cidade em KM: ");
    scanf (" %f", &area1);

    printf("Informe é o PIB da cidade: ");
    scanf (" %f", &pib1);

    printf("Informe a quantidade de pontos turisticos: ");
    scanf (" %d", &pontos_turisticos1);

     // entrada dos dados da carta 2
    printf(" \n");
    printf(" *** Próximo Cadastro ***\n");
   
    printf("Digite a sigla do próximo Estado: ");
    scanf(" %s", &estado2);

    printf("Digite o código da Cidade: ");
    scanf (" %s", &codigo_cidade2);

    printf("Digite o nome da Cidade: ");
    scanf (" %s", &nome_cidade2);

    printf("Informe a população da Cidade: ");
    scanf (" %d", &populacao2);

    printf("Informe a área da cidade em KM: ");
    scanf (" %f", &area2);

    printf("Informe é o PIB (em bilhões) da cidade: ");
    scanf (" %f", &pib2);

    printf("Informe a quantidade de pontos turisticos: ");
    scanf (" %d", &pontos_turisticos2);

    printf("\n");

    // impressão dos dados ca carta 1
    printf("Carta 1\n");

    printf("Estado: %s \n", estado1);
    printf("Código da cidade: %s \n", codigo_cidade1);
    printf("Nome da cidade: %s \n", nome_cidade1);
    printf("População da cidade: %d \n", populacao1);
    printf("Area da cidade: %.2f Km \n", area1);
    printf("PIB da cidade: %.2f bilhões \n", pib1);
    printf("Pontos turisticos da cidade: %d \n", pontos_turisticos1);

    printf(" \n");

    // impressão dos dados ca carta 2
    printf("Carta 2\n");
    
    printf("Estado: %s \n", estado2);
    printf("Código da cidade: %s \n", codigo_cidade2);
    printf("Nome da cidade: %s \n", nome_cidade2);
    printf("População da cidade: %d \n", populacao2);
    printf("Area da cidade: %.2f km \n", area2);
    printf("PIB da cidade: R$ %.2f bilhões \n", pib2);
    printf("Pontos turisticos da cidade: %d \n", pontos_turisticos2);

    printf(" \n");

    printf("Cadastro com Sucesso! \n");

    printf(" \n");
    
    // cálculo da Densidade Populacional
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // cálculo do PIB per capita
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    // atributo para comparação (pontos turisticos)
    char atributo_escolhido[] = "Pontos Turisticos";
    float valor1 = pontos_turisticos1; // Valor da Carta 1
    float valor2 = pontos_turisticos2; // Valor da Carta 2

    // exibindo os dados das cartas
    printf("Comparação de cartas (Atributo: %s):\n", atributo_escolhido);
    printf("Carta 1 - %s (%s): %.2f\n", nome_cidade1, estado1, valor1);
    printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, estado2, valor2);

    // comparando as cartas
    if (valor1 > valor2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
    } else if (valor2 > valor1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

return 0;

}