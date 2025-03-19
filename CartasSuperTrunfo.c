#include <stdio.h>

int main(){
    char Estado = 'A'; //declara uma variavel Estado do tipo char
    char cod[4] = "A01"; //declara uma variavel cod do Tipo char string
    char NomeCidade[12]; //declara uma variavel NomeCidade do Tipo string
    int população; //declara uma variavel população do Tipo Int
    float area; //declara uma variavel area do Tipo Float
    float pib; //declara uma variavel pib do Tipo Float
    int turistico; //declara uma variavel turistico do tipo Int

    printf("Jogo Super Trunfo - Faça Sua Carta\n\n"); //Titulo do Jogo

    printf("Carta 1\n");

    printf("Entre A - H Defina seu Estado:\n "); // Passo 1 - Escolher seu estado
    scanf(" %c", &Estado);

    printf("Utilizando a inicial do seu estado acrescente 01,02,03 ou 04:\n "); //Passo 2 - escolher seu estado acrescentando os numeros indicados
    scanf("%3s", cod);

    printf("Escolha o Nome de Sua Cidade:\n "); //Passo 3 - Escolher o nome de sua cidade
    scanf("%s",NomeCidade);

    printf("Defina sua população:\n "); // Passo 4 - Indicar o tamanho de sua população
    scanf("%d",&população);

    printf("Quantos KM tem sua cidade?\n "); //Passp 5 - Indicar a area de sua cidade
    scanf("%f", &area);

    printf("Defina o PIB da sua cidade:\n "); //Passo 6 - Indicar o PIB de sua cidade
    scanf("%f",&pib);

    printf("Quantos pontos turísticos sua cidade tem?\n "); //Passo 7 - Indicar quantos pontos turisticos sua cidade tem
    scanf("%d", &turistico);

    printf("Carta 1: Estado: %c :Inicial: %3s :Cidade: %s :População: %d :Area: %f :Pib: %f :Pontos Turisticos: %d\n\n",Estado, cod, NomeCidade, população, area, pib, turistico);


    printf("Carta 2\n");

    printf("Entre A - H Defina seu Estado:\n "); // Passo 1 - Escolher seu estado
    scanf(" %c", &Estado);

    printf("Utilizando a inicial do seu estado acrescente 01,02,03 ou 04:\n "); //Passo 2 - escolher seu estado acrescentando os numeros indicados
    scanf("%3s", cod);

    printf("Escolha o Nome de Sua Cidade:\n "); //Passo 3 - Escolher o nome de sua cidade
    scanf("%s",NomeCidade);

    printf("Defina sua população:\n "); // Passo 4 - Indicar o tamanho de sua população
    scanf("%d",&população);

    printf("Quantos KM tem sua cidade?\n "); //Passp 5 - Indicar a area de sua cidade
    scanf("%f", &area);

    printf("Defina o PIB da sua cidade:\n "); //Passo 6 - Indicar o PIB de sua cidade
    scanf("%f",&pib);

    printf("Quantos pontos turísticos sua cidade tem?\n "); //Passo 7 - Indicar quantos pontos turisticos sua cidade tem
    scanf("%d", &turistico);

    printf("Carta 2: Estado: %c :Inicial: %3s :Cidade: %s :População: %d :Area: %f :Pib: %f :Pontos Turisticos: %d",Estado, cod, NomeCidade, população, area, pib, turistico);

return 0;

}