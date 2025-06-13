#include <stdio.h>

void entradaDeDados()
{
    //variaveis
    char estado[20],estado_2[20];
    char codigoCarta[5], codigoCarta_2[5];
    char nomeCidade[20], nomeCidade_2[20];
    int populacao, populacao_2,opcao,comparacao;
    float areaCidade, areaCidade_2;
    float pibCidade, pibCidade_2;
    int pontosTuristicos, pontosTuristicos_2;
    float densidadePopulacional, densidadePopulacional_2;
    float pibPerCapita, pibPerCapita_2;
    float skill_1, skill_2;

    //variaveis comparacao

    int compPontosTu;
    float compDesidade;
    float superPoder;

  
    //Soma das skill para o super poder;
    skill_1 = pontosTuristicos + populacao + areaCidade + pibCidade + pibPerCapita + densidadePopulacional;

    skill_2 = pontosTuristicos_2 + populacao_2 + areaCidade_2 + pibCidade_2 + pibPerCapita_2 + densidadePopulacional_2;

    // Inicio do jogo

    printf("-----Jogo Super Trunfo------\n");
    printf("----------------------------------\n");
    printf("1: Iniciar jogo Super Trunfo\n");
    printf("2: Regras do jogo\n");
    printf("3: sair...\n");
    printf("----------------------------------\n\n");

    printf("Qual sua opção:");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("----------------------------------\n");
        printf("Vamos casdastrar suas carta do jogo.\n");
        printf("----------------------------------\n");

        printf("Carta: 1\n");
        printf("Digite o Estado: \n");
        scanf("%s", &estado);
        printf("Digite o Codigo da carta: \n");
        scanf("%s", &codigoCarta);
        printf("Digite o Nome da cidade: \n");
        scanf("%s", &nomeCidade);
        printf("Digite a População da cidade: \n");
        scanf("%d", &populacao);
        printf("Digite o Tamanho da area da cidade: \n");
        scanf("%f", &areaCidade);
        printf("Digite o Pib da cidade: \n");
        scanf("%f", &pibCidade);
        printf("Digite os Pontos turistico da cidade: \n");
        scanf("%d", &pontosTuristicos);

        densidadePopulacional = (float)populacao / areaCidade;
        pibPerCapita = (float)pibCidade / populacao;

        printf("--------- Informações da carta - 1 --------- \n");

        printf("Carta: 1\n");
        printf("Estado: %s \n", estado);
        printf("Codigo da carta: %s \n", codigoCarta);
        printf("Nome da cidade: %s \n", nomeCidade);
        printf("População: %d \n", populacao);
        printf("Area da cidade: %f \n", areaCidade);
        printf("Pib: %f \n", pibCidade);
        printf("Numeros de pontos turisticos: %d \n", pontosTuristicos);

        printf("----------------------------------------- \n");

        printf("Carta: 2\n");
        printf("Digite o Estado: \n");
        scanf("%s", &estado_2);
        printf("Digite o Codigo da carta: \n");
        scanf("%s", &codigoCarta_2);
        printf("Digite o Nome da cidade: \n");
        scanf("%s", &nomeCidade_2);
        printf("Digite a População da cidade: \n");
        scanf("%d", &populacao_2);
        printf("Digite o Tamanho da area da cidade: \n");
        scanf("%f", &areaCidade_2);
        printf("Digite o Pib da cidade: \n");
        scanf("%f", &pibCidade_2);
        printf("Digite os Pontos turistico da cidade: \n");
        scanf("%d", &pontosTuristicos_2);

        densidadePopulacional_2 = (float)populacao_2 / areaCidade_2;
        pibPerCapita_2 = (float)pibCidade_2 / populacao_2;

        printf("--------- Informações da carta - 2 --------- \n");

        printf("Carta: 2\n");
        printf("Estado: %s \n", estado_2);
        printf("Codigo da carta: %s \n", codigoCarta_2);
        printf("Nome da cidade: %s \n", nomeCidade_2);
        printf("População: %d \n", populacao_2);
        printf("Area da cidade: %f \n", areaCidade_2);
        printf("Pib: %f \n", pibCidade_2);
        printf("Numeros de pontos turisticos: %d \n", pontosTuristicos_2);


        printf("-------------------------------------------\n\n");
        printf("Vamos Comparar qual carta é mais forte\n\n");
        printf("-------------------------------------------\n\n");
        printf("1: Carta com o maior poder\n");
        printf("2: Carta com a menor desidade populacional\n");
        printf("3: Carta com mais pontos turusticos\n");
        printf("-------------------------------------------\n\n");
        printf("Qual sua opção:");
        scanf("%d", &comparacao);

        switch (comparacao)
        {
        case 1:
            if(skill_1 > skill_2){
                printf("-------------------------------------------\n\n");
                printf("A carta 1 tem o maior super poder\n");
                printf("-------------------------------------------\n\n");
            }else{
                printf("-------------------------------------------\n\n");
                printf("A carta 2 tem o maior super poder\n");
                printf("-------------------------------------------\n\n");
            }
            break;
        case 2:
            
            if(densidadePopulacional < densidadePopulacional_2){
                printf("Densidade da Carta 1: %f\n", densidadePopulacional);
                printf("Densidade da Carta 2: %f\n", densidadePopulacional_2);
                printf("-------------------------------------------\n\n");
                printf("A carta 1  VENCEU \n\n");
                printf("-------------------------------------------\n\n");
            }else{
                printf("Densidade da Carta 1: %f\n", densidadePopulacional);
                printf("Densidade da Carta 2: %f\n", densidadePopulacional_2);
                printf("-------------------------------------------\n\n");
                printf("A carta 2 VENCEU \n\n");
                printf("-------------------------------------------\n\n");
        }
        

            break;
        case 3:
            if(pontosTuristicos > pontosTuristicos_2){
                printf("Numero de pontos turisticos da Carta 1: %d \n",pontosTuristicos);
                printf("Numero de pontos turisticos da Carta 2: %d \n", pontosTuristicos_2);
                printf("-------------------------------------------\n\n");
                printf("A carta 1  VENCEU\n\n");
                printf("-------------------------------------------\n\n");
            }else{
                printf("Numero de pontos turisticos da Carta 1: %d \n",pontosTuristicos);
                printf("Numero de pontos turisticos da Carta 2: %d \n", pontosTuristicos_2);
                printf("-------------------------------------------\n\n");
                printf("A carta 2 VENCEU\n\n");
                printf("-------------------------------------------\n\n");
            }
            break;    
        
        default:
            printf("opção invalida");
            break;
        }
        


        

   
        break;
    case 2:
        printf("Regras do jogo....\n");
        printf("Cadastrar as cartas do jogo e comparar seu poder\n");
        break;
    case 3:
        printf("até uma proxima....\n");
        break;
    
    default:

        printf("opção invalida");
        break;
    }
   
   
 

    

    //printf("O poder da carta %s e da carta %s = %.1f", codigoCarta,codigoCarta_2, superPoder);




}

int main()
{
    entradaDeDados();
    return 0;
}