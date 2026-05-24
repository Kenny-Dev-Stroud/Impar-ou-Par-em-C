#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    int escolhaVC, escolhaPC, numeroVC, numeroPC, resultadoSoma, resultado;
    srand(time(0));

    printf(" ### Bem-Vindo ao Impar ou Par ### \n");
    printf("Veja a opções abaixo para jogar: \n");
    printf("Você quer Impar ou Par? \n Digite: \n");
    printf("1 para Impar:\n");
    printf("2 para Par: \n");
    scanf("%d", &escolhaVC);

    switch (escolhaVC)
    {
    case 1:
        printf("Digite um número: \n");
        scanf("%d", &numeroVC);
        numeroPC = rand() % 11;
        resultadoSoma = numeroPC + numeroVC;
        printf("Você: %d \nComputador: %d \nSoma do seu e do PC: %d \n", numeroVC, numeroPC, resultadoSoma);
        resultado = resultadoSoma % 2 == 0 ? printf("Computador ganhou! \n") : printf("Você ganhou! \n");
    
        break;
    
    case 2:
        printf("Digite um número: \n");
        scanf("%d", &numeroVC);
        numeroPC = rand() % 11;
        resultadoSoma = numeroPC + numeroVC;
        printf("Você: %d \nComputador: %d \nSoma do seu e do PC: %d \n", numeroVC, numeroPC, resultadoSoma);
        resultado = resultadoSoma % 2 == 1 ? printf("Computador ganhou! \n") : printf("Você ganhou! \n");
        break;

    default:
        printf("OPção Inválida! \n");
        break;
    }

    return 0;


}