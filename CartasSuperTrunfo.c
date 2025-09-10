#include <stdio.h>

int main(){
    
    // Definindo a estrutura da carta 1
    
    char estado1;
    char codigo1 [3];
    char cidade1 [30];
    int populacao1;
    float area1;
    float pib1;
    int turisticos1;
    // Definindo a estrutura da carta 2

    char estado2;
    char codigo2 [3];
    char cidade2 [30];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;

    // Cadastro das cartas 1
    printf("Carta 1 - Digite a incial de um estado \n" );
    scanf("%s" , &estado1 );

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
    scanf("%f" , &turisticos1);

    // Cadastro das cartas 2
    printf("Carta 2 - Digite a incial de um estado \n" );
    scanf("%s" , &estado2 );

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
    scanf("%f" , &turisticos2 );

    // Exibição das cartas
    printf("Carta 1 \n");
    printf("Inicial do estado: %c \n" , estado1);

    printf("Código: %s \n" , codigo1);

    printf("Cidade: %s \n" , cidade1);

    printf("Populaçao: %i \n" , populacao1);

    printf("Area: %f \n" , area1);

    printf("PIB: %f \n" , pib1);

    printf("Numeros de pontos turisticos: %i \n" , turisticos1);

    printf("\nCarta 2 \n");
    printf("Inicial do estado: %c \n" , estado2);

    printf("Código: %s \n" , codigo2);

    printf("Cidade: %s \n" , cidade2);

    printf("Populaçao: %i \n" , populacao2);

    printf("Area: %f \n" , area2);

    printf("PIB: %f \n" , pib2);

    printf("Numeros de pontos turisticos: %i \n" , turisticos2);


    return 0;
}












