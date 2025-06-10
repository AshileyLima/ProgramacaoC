#include <stdio.h>

int main () {
    // Carta 1
    char Estado1;
    char Codigo1 [04];
    char NomedaCidade1 [50];
    int Populacao1;
    float AreaKM1; 
    float PIB1;
    int PontosTuristicos1;

    // Carta 2
    char Estado2;
    char Codigo2 [04];
    char NomedaCidade2 [50];
    int Populacao2;
    float AreaKM2; 
    float PIB2;
    int PontosTuristicos2;

 // Leitura da Carta 1
    printf("Cadastro da Carta 1: ");

    printf("Digite o Estado (Letra de A a H): ");
    scanf("%c", &Estado1); // Exibe valores inseridos no campo Estado

    printf("Digite o Código (Letra seguida de numero de 01 a 04): ");
    scanf("%s", Codigo1); // Exibe valores inseridos no campo Código

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", NomedaCidade1);; // Lê nome completo com espaços

    printf("Digite a quantidade de população da Cidade: ");
    scanf("%d", &Populacao1); // Exibe valores inseridos no campo Populacao

    printf("Digite a área da cidade em KM²: ");
    scanf("%f", &AreaKM1); // Exibe valores inseridos no campo Area KM

    printf("Digite o PIB da cidade em bilhoes de reais: ");
    scanf("%f", &PIB1); // Exibe valores inseridos no campo PIB

    printf("Digite o número de ponto turístico da cidade: ");
    scanf("%d", &PontosTuristicos1); // Exibe valores inseridos no campo Ponto Turistico

    printf("\n");

 // Leitura da Carta 2
    printf("Cadastro da Carta 2: ");

    printf("Digite o Estado (Letra de A a H): \n");
    scanf("%c", &Estado2); // Exibe valores inseridos no campo Estado

    printf("Digite o Código da Cidade (Letra seguida de numero de 01 a 04): ");
    scanf("%s", Codigo2); // Exibe valores inseridos no campo Código

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", NomedaCidade2);; // Lê nome completo com espaços

    printf("Digite a quantidade de população da Cidade: ");
    scanf("%d", &Populacao2); // Exibe valores inseridos no campo Populacao

    printf("Digite a área da cidade em KM²: ");
    scanf("%f", &AreaKM2); // Exibe valores inseridos no campo Area KM

    printf("Digite o PIB da cidade em bilhoes de reais: ");
    scanf("%f", &PIB2); // Exibe valores inseridos no campo PIB

    printf("Digite o número de ponto turístico da cidade: ");
    scanf("%d", &PontosTuristicos2); // Exibe valores inseridos no campo Ponto Turistico

    printf("\n");

return 0;
    
}