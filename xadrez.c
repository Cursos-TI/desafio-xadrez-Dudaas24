#include <stdio.h>

int main() {

    //TORRE - Move-se em linha reta horizontalmente ou verticalmente.
    //BISPO - Move-se na diagonal.
    //RAINHA - Move-se em todas as direções.
    //CAVALO - Move-se duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente, formando um "L".
    
    int torre = 5, bispo = 0;

     // Nível Novato - Movimentação das Peças (utilizar uma estrutura diferente para cada peça)
    printf("\n--------->>> DESAFIO DE XADREZ - MATECHECK <<<---------\n");
    printf("\n");

    printf("\n***** MOVIMENTAÇÃO DAS PEÇAS *****\n");

    printf("TORRE (cinco casas para a direita)\n");
    while (torre >= 0){
        printf("Direita\n");

        torre--;
    }

    printf("BISPO (cinco casas na diagonal para cima e à direita)\n");
    do
    {
        printf("Cima, Direita\n");
        bispo++;

    } while (bispo <= 5);

    printf("RAINHA (oito casas para a esquerda)\n");
    for (int rainha = 0; rainha < 8 ; rainha++)
    {
        printf("Esquerda\n");
    }

    // Nível Aventureiro - Movimentando o Cavalo (loops aninhados)
    printf("CAVALO (duas para baixo, uma para a esquerda)\n");
    for (int i = 0; i < 2; i++){
        printf("Baixo\n");
        
    }int j = 0;
    while (j < 1){
        printf("Esquerda\n");
        j++;
    }
    

       

    return 0;
}
