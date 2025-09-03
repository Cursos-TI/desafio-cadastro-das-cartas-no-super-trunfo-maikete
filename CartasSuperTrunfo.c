#include <stdio.h>

// Desafio Super Trunfo - Países
int main() {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
};
    
int main() {

    // Cadastro da primeira carta
    
    printf("Cadastro da primeira carta: \n");
    printf("Codigo da cidade (A01): ");
    scanf("%s", '&carta1.codigo');
    printf("Populaçao: ");
    scanf("%d", '&carta1.populacao');
    printf("Area: ");
    scanf("%f", '&carta1.area');
    printf("PIB: ");
    scanf("%f", '&carta1.pib');
    printf("Numero de pontos turisticos: ");
    scanf("%d", '&carta1.pontos_turisticos');

// Cadastro da segunda carta
    
printf("Cadastro da segunda carta: \n");
    printf("Codigo da cidade (ex: B02): ");
    scanf("%s", 'carta2.codigo');
    printf("Populaçao: ");
    scanf("%d", '&carta2.populacao');
    printf("Area: ");
    scanf("%f", '&carta2.area');
    printf("PIB: ");
    scanf("%f", '&carta2.pib');
    printf("Numero de pontos turisticos: ");
    scanf("%d", '&carta2.pontos_turisticos');

    // Exibição dos dados
    
    printf(" Dados da primeira carta:\n");
    printf("Código: %s\n", 'carta1.codigo');
    printf("Populaçao: %d\n", 'carta1.populacao');
    printf("Área: %.2f\n", 'carta1.area');
    printf("PIB: %.2f\n", 'carta1.pib');
    printf("Numero de pontos turísticos: %d\n", 'carta1.pontos_turisticos');

    printf("Dados da segunda carta:\n");
    printf("Codigo: %s\n", 'carta2.codigo');
    printf("População: %d\n", 'carta2.populacao');
    printf("Area: %.2f\n", 'carta2.area');
    printf("PIB: %.2f\n", 'carta2.pib');
    printf("Número de pontos turísticos: %d \n", 'carta2.pontos_turisticos');

    return 0;
}
