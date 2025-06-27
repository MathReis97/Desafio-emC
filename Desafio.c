#include <stdio.h> 

int main() {

    char estado[8], nomecidade[50], estado2[8], nomecidade2[50];
    char codigo[4], codigo2[4];
    int populacao, numeroturismo, populacao2, numeroturismo2;
    float area, pib, area2, pib2;

//Coletando as informções da carta 1
    printf("Digite as informações da carta 1: \n"); 
    printf("Qual é o estado ? \n");
    scanf("%s", &estado);

    printf("Qual o codigo da carta? \n");
    scanf("%s", codigo);

    printf("Nome da cidade ? \n");
    scanf("%s", nomecidade);

    printf("Total da população? \n");
    scanf("%d", &populacao);

    printf("Qual a area? \n");
    scanf("%f", &area);

    printf("Qual é o PIB da cidade? \n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos tem? \n");
    scanf("%d", &numeroturismo);

    
//coletando as inforções da carta 2
    printf("Digite as informações da carta 2: \n"); 
    printf("Qual é o estado ? \n");
    scanf("%s", &estado2);

    printf("Qual o codigo da carta? \n");
    scanf("%s", &codigo2);

    printf("Nome da cidade ? \n");
    scanf("%s", nomecidade2);

    printf("Total da população? \n");
    scanf("%d", &populacao2);

    printf("Qual a area? \n");
    scanf("%f", &area2);

    printf("Qual é o PIB da cidade? \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos tem? \n");
    scanf("%d", &numeroturismo2);


// exibição da carta 1
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Numeros de pontos turísticos: %d\n\n\n", numeroturismo);
    
// exibição da carta 2
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Numeros de pontos turísticos: %d\n\n\n", numeroturismo2);

return 0;

}