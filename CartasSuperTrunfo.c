#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {

  char estado[20] = "Alagoas";
  char carta[20] = 1;
  char cidade[20] = "Maceio";
  int populacao = 243.000; 
  int código = 'A1'; 
  int pontoturistico = 4;
  float pib = 26.000;
  double área = 509.320;
      
    printf("Digite o Estado: \n");
    scanf("%s", &estado); 
    printf("Digite o código: \n");
    scanf("%d", &código);     
    printf("Digite a Inicial: \n");
    scanf("%s", &carta);
    printf("Digite a Cidade: \n");
    scanf("%s", &cidade);     
    printf("Digite a populacao: \n");
    scanf("%d", &populacao);   
    printf("Digite a área: \n");
    scanf("%d", &área);
    print("Digite o pib: \n");
    scanf("%f", &pib);
    printf("Digite o pontoturistico: \n");
    scanf("%d", &pontoturistico);

    printf("O estado: %s\n", estado);
    printf("O Código: %s \n", código);
    printf("A carta: %s \n", carta);
    printf("A cidade é: %s \n", cidade);
    printf("A populaçao é: %d \n", populacao);
    printf("A área é: %d \n", área);
    printf("O pib é: %f \n", pib);
    printf("O pontoturistico é: %d \n", pontoturistico);  
        
    
return 0;

   } 


