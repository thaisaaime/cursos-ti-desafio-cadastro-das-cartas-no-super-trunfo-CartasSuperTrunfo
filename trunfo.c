#include <stdio.h>

int main(){
    
    // Definindo a estrutura da carta 1
    
    char estado1;
    char codigo1 [3];
    char cidade1 [30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int turisticos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;
    // Definindo a estrutura da carta 2

    char estado2;
    char codigo2 [3];
    char cidade2 [30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turisticos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // Cadastro das cartas 1
    printf("Carta 1 - Digite a incial de um estado \n" );
    scanf(" %c", &estado1);

    printf("Carta 1 - Digite um código de 01 a 04 \n" );
    scanf("%s" , codigo1 );

    printf("Carta 1 - Informe uma Cidade \n" );
    scanf("%s" , cidade1 );

    printf("Carta 1 - Numero populacional \n" );
    scanf("%i" , &populacao1);

    printf("Carta 1 - Informe a area \n" );
    scanf("%f" , &area1 );

    printf("Carta 1 - Informe o PIB \n" );
    scanf("%f" , &pib1);

    printf("Carta 1 - Pontos turisticos \n" );
    scanf("%i", &turisticos1);

    // Cálculos da carta 1
     densidade1 = populacao1 / area1;
     pibPerCapita1 = pib1 / populacao1;

     // Cálculo do Super Poder da carta 1
     superPoder1 = (float)populacao1 + area1 + pib1 + turisticos1 + pibPerCapita1 + (1.0 / densidade1);

    // Cadastro das cartas 2
    printf("Carta 2 - Digite a incial de um estado \n" );
    scanf(" %c", &estado2);

    printf("Carta 2 - Digite um código de 01 a 04 \n" );
    scanf("%s" , codigo2 );

    printf("Carta 2 -Informe uma Cidade \n" );
    scanf("%s" , cidade2  );

    printf("Carta 2 -Numero populacional \n" );
    scanf("%i" , &populacao2 );

    printf("Carta 2 -Informe a area \n" );
    scanf("%f" , &area2 );

    printf("Carta 2 -Informe o PIB \n" );
    scanf("%f" , &pib2 );

    printf("Carta 2 -Pontos turisticos \n" );
    scanf("%i", &turisticos2);

    // Cálculos da carta 2
     densidade2 = populacao2 / area2;
     pibPerCapita2 = pib2 / populacao2;

     // Cálculo do Super Poder da carta 2
     superPoder2 = (float)populacao2 + area2 + pib2 + turisticos2 + pibPerCapita2 + (1.0 / densidade2);

    // Exibição das cartas
    printf("Carta 1 \n");
    printf("Inicial do estado: %c \n" , estado1);

    printf("Código: %s \n" , codigo1);

    printf("Cidade: %s \n" , cidade1);

    printf("Populaçao: %i \n" , populacao1);

    printf("Area: %f \n" , area1);

    printf("PIB: %f \n" , pib1);

    printf("Numeros de pontos turisticos: %i \n" , turisticos1);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2 \n");
    printf("Inicial do estado: %c \n" , estado2);

    printf("Código: %s \n" , codigo2);

    printf("Cidade: %s \n" , cidade2);

    printf("Populaçao: %i \n" , populacao2);

    printf("Area: %f \n" , area2);

    printf("PIB: %f \n" , pib2);

    printf("Numeros de pontos turisticos: %i \n" , turisticos2);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("Super Poder: %.2f\n", superPoder2);


    // Comparações entre as cartas
    printf("\n\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turisticos1 > turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);
    return 0;




    



}












