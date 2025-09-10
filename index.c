#include <stdio.h>
#include <string.h>

struct Carta // estrutura da carta
{
    char opcao; // A a H
    char codigo[5]; // A01, B02, C03...
    char pais[50]; // Brasil, Argentina...
    unsigned long int populacao; // em numero inteiro
    float area; // em km²
    float pib; // em bilhões de reais
    int pontosTuristicos; //em numero inteiro
    float densidadePopulacional; // em hab/km²
    float PIBperCapita; // em reais
    float superpoder; // soma de todos os atributos numericos
};


// Função principal


int main(){
    struct Carta c1, c2;
    int opcao;
    
    

    //////////// Cadastro da carta 1 ////////////////


    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite uma opcao de (A a H): ");
    scanf(" %c", &c1.opcao);

    printf("Digite o codigo do País (ex: A01): ");
    scanf("%s", c1.codigo);

    printf("Digite o País (ex: Brasil): ");
    scanf("%s", c1.pais);

    printf("Digite o numero da populacao: ");
    scanf("%lu", &c1.populacao);

    printf("Digite a area do País(em km²): ");
    scanf("%f", &c1.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &c1.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &c1.pontosTuristicos );



    //////////// Cadastro da carta 2 ////////////////

    printf("== Cadastro da carta 2 ==\n");

    printf("Digite uma opcao de (A a H): ");
    scanf(" %c", &c2.opcao);

    printf("Digite o codigo do País (ex: A01): ");
    scanf("%s", c2.codigo);

    printf("Digite o País (ex: Brasil): ");
    scanf("%s", c2.pais);

    printf("Digite o numero da populacao: ");
    scanf("%lu", &c2.populacao);

    printf("Digite a area do País(em km²): ");
    scanf("%f", &c2.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &c2.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &c2.pontosTuristicos);

    ////// Cálculo dos atributos derivados //////

    c1.densidadePopulacional = c1.populacao / c1.area; // Calculando densidade populacional
    c1.PIBperCapita = c1.pib / c1.populacao; // Convertendo PIB para reais e calculando PIB per capita
    c1.superpoder = c1.populacao + (int)c1.area + (int)c1.pib + c1.pontosTuristicos + (int)c1.PIBperCapita + (int)c1.densidadePopulacional; // Calculando superpoder

    c2.densidadePopulacional = c2.populacao / c2.area; // Calculando densidade populacional
    c2.PIBperCapita = c2.pib / c2.populacao; // Convertendo PIB para reais e calculando PIB per capita
    c2.superpoder = c2.populacao + (int)c2.area + (int)c2.pib + c2.pontosTuristicos + (int)c2.PIBperCapita + (int)c2.densidadePopulacional; // Calculando superpoder

    ////// Exibição das cartas cadastradas //////


    printf("\n*** Carta 1 ***\n");
    printf("Opcao: %c\n", c1.opcao);
    printf("Codigo: %s\n", c1.codigo);
    printf("País: %s\n", c1.pais);
    printf("Populacao: %lu\n", c1.populacao);
    printf("Area: %.2f km²\n", c1.area);
    printf("PIB: %.2f bilhões de reais\n", c1.pib);
    printf("Numero de Pontos Turisticos: %d\n", c1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", c1.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", c1.PIBperCapita);
    printf("Superpoder: %.2f\n", c1.superpoder);

    ///// Exibição da segunda carta cadastrada //////

    printf("\n*** Carta 2 ***\n");
    printf("Opcao: %c\n", c2.opcao);
    printf("Codigo: %s\n", c2.codigo);
    printf("País: %s\n", c2.pais);
    printf("Populacao: %lu\n", c2.populacao);
    printf("Area: %.2f km²\n", c2.area);
    printf("PIB: %.2f bilhões de reais\n", c2.pib);
    printf("Numero de Pontos Turisticos: %d\n", c2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", c2.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", c2.PIBperCapita);
    printf("Superpoder: %.2f\n", c2.superpoder);  
    
    printf("\n");

    // Escolhas de atributos para comparacao
    
    printf("Escolha o atributo para comparar \n");

    printf("1 - Populacao\n");

    printf("2 - Area\n");

    printf("3 - PIB\n");

    printf("4 - Pontos Turisticos\n");

    printf("5 - Densidade demografica\n");

    printf("\n");
    
    printf("O atributo escolhido para comparacao foi: ");
    scanf("%d", &opcao);

    printf("\n");

    // switch criado para que seja puxado a informacao correta que o usuario precisa ter
    
    switch (opcao)
    {
    case 0:
        printf("Paíse Escolhido: %s\n", c1.pais);
        printf("Paíse Escolhido: %s\n", c2.pais);
        break;

        // case de comparacao de populacao

    case 1:
        printf("Populacao vencedora:\n");
        if (c1.populacao > c2.populacao){
            printf("Carta 1 vence com maior populacao: %lu\n", c1.populacao);
        } else if (c1.populacao < c2.populacao){
            printf("Carta 2 vence com maior populacao: %lu\n", c2.populacao);
        } else {
            printf("Empate na populacao: %lu\n", c1.populacao);
        }
        break;

        // case de comparacao de area

    case 2:
        printf("Area vencedora:\n");
        if (c1.area > c2.area){
            printf("Carta 1 vence com maior area: %.2f km²\n", c1.area);
        } else if (c1.area < c2.area){
            printf("Carta 2 vence com maior area: %.2f km²\n", c2.area);
        } else {
            printf("Empate na area: %.2f km²\n", c1.area);
        }
        break;

        // case de comparacao de pib

    case 3:
        printf("Pib vencedora:\n");
        if (c1.pib > c2.pib){
            printf("Carta 1 vence com maior pib: %.2f bilhões de reais\n", c1.pib);
        } else if (c1.pib < c2.pib){
            printf("Carta 2 vence com maior pib: %.2f bilhões de reais\n", c2.pib);
        } else {
            printf("Empate no pib: %.2f bilhões de reais\n", c1.pib);
        }
        break;

        // case de comparacao de turismo

    case 4:
        printf("Pontos Turisticos vencedora:\n");
        if (c1.pontosTuristicos > c2.pontosTuristicos){
            printf("Carta 1 vence com maior numero de pontos turisticos: %d\n", c1.pontosTuristicos);
        } else if (c1.pontosTuristicos < c2.pontosTuristicos){
            printf("Carta 2 vence com maior numero de pontos turisticos: %d\n", c2.pontosTuristicos);
        } else {
            printf("Empate no numero de pontos turisticos: %d\n", c1.pontosTuristicos);
        }
        break;

        // case de comparacao de densidade populacional
    
    case 5:
        printf("Densidade Populacional vencedora:\n");
        if (c1.densidadePopulacional > c2.densidadePopulacional){
            printf("Carta 1 vence com maior densidade populacional: %.2f hab/km²\n", c1.densidadePopulacional);
        } else if (c1.densidadePopulacional < c2.densidadePopulacional){
            printf("Carta 2 vence com maior densidade populacional: %.2f hab/km²\n", c2.densidadePopulacional);
        } else {
            printf("Empate na densidade populacional: %.2f hab/km²\n", c1.densidadePopulacional);
        }  
        break;

        //////// fim das opcoes de case
    
    default:
        printf("Opcao invalida\n");
        break;
    }

    // informacoes que irá aparecer para o usuario

    printf("\n");

    // paises escolhidos

    printf("Pais escolhido: %s\n", c1.pais);
    printf("Pais escolhido: %s\n", c2.pais);

    /////////////

    printf("\n");

    /// comparacoes de todos os atributos ///


    // case de comparacao de populacao
    
    if(c1.populacao > c2.populacao){
        
        printf("Carta 1, vence com maior populacao: %lu\n", c1.populacao);
    } else if (c1.populacao < c2.populacao){
        printf("Carta 2, vence com maior populacao: %lu\n", c2.populacao);
    } else {
        printf("Empate na populacao: %lu\n", c1.populacao);
    }


    // case de comparacao de area



    if(c1.area > c2.area){
        printf("Carta 1, vence com maior area: %.2f km²\n", c1.area);
    } else if (c1.area < c2.area){
        printf("Carta 2, vence com maior area: %.2f km²\n", c2.area);
    } else {
        printf("Empate na area: %.2f km²\n", c1.area);
    }


    // case de comparacao de pib


    if(c1.pib > c2.pib){
        printf("Carta 1, vence com maior pib: %.2f bilhões de reais\n", c1.pib);
    } else if (c1.pib < c2.pib){
        printf("Carta 2, vence com maior pib: %.2f bilhões de reais\n", c2.pib);
    } else {
        printf("Empate no pib: %.2f bilhões de reais\n", c1.pib);
    }

    // case de comparacao de turisticos


    if(c1.pontosTuristicos > c2.pontosTuristicos){
        printf("Carta 1, vence com maior numero de pontos turisticos: %d\n", c1.pontosTuristicos);
    } else if (c1.pontosTuristicos < c2.pontosTuristicos){
        printf("Carta 2, vence com maior numero de pontos turisticos: %d\n", c2.pontosTuristicos);
    } else {
        printf("Empate no numero de pontos turisticos: %d\n", c1.pontosTuristicos);
    }


    // case de comparacao de densidade populacional


    if(c1.densidadePopulacional <= c2.densidadePopulacional){
        printf("Carta 1, vence com menor densidade populacional: %.2f hab/km²\n", c1.densidadePopulacional);
    } else if (c1.densidadePopulacional < c2.densidadePopulacional){
        printf("Carta 2, vence com menor densidade populacional: %.2f hab/km²\n", c2.densidadePopulacional);
    } else {
        printf("Empate na densidade populacional: %.2f hab/km²\n", c1.densidadePopulacional);
    }

    ////////// fim de mensagem para o usuario de todos os atributos ////////
      
    return 0;
}
