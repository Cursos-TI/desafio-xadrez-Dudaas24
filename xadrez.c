#include <stdio.h>
    //TORRE - Move-se em linha reta horizontalmente ou verticalmente.
    //BISPO - Move-se na diagonal.
    //RAINHA - Move-se em todas as direções.
    //CAVALO - Move-se duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente, formando um "L".

//Nível Mestre - Criando Movimentos Complexos (recursividade e loops complexos)

//Função recursiva para o movimento da torre
//TORRE (cinco casas para a direita)
void moverTorre(int casa_T){
    if(casa_T == 0){
        return;
    }
    printf("Direita\n");
    moverTorre(casa_T - 1);
}

//Função recursiva e loop aninhado para o movimento do bispo
//BISPO (cinco casas na diagonal para cima e à direita)
void moverBispo(int casa_B){
    for(int i = 0; i < casa_B; i++){
        for(int j = 0; j = i; j++);
        printf("Cima, direita\n");
        return;
    }
}

//Função recursiva para o movimento da rainha
//RAINHA (oito casas para a esquerda)
void moverRainha(int casa_R){
    if(casa_R == 0){
        return;
    }
        printf("Esquerda\n");
        moverRainha(casa_R - 1);
    }

int main() {
   
     // Nível Novato - Movimentação das Peças (utilizar uma estrutura diferente para cada peça)
    printf("\n--------->>> DESAFIO DE XADREZ - MATECHECK <<<---------\n");
    printf("\n");

    printf("\n***** MOVIMENTAÇÃO DAS PEÇAS *****\n");


    printf("TORRE (cinco casas para a direita)\n");
    //Torre: Função Recursiva
       moverTorre(5);//
       printf("\n");
    

    printf("BISPO (cinco casas na diagonal para cima e à direita)\n");
    //Bispo: Função recursiva e loop aninhado
    //Loop aninhado para imprimir a direção e sentido da peça
        int j = 0;

        if(j < 5){
            printf("Cima, Direita\n");
            j++;
        }
    //Função Recursiva para emitir a quantidade de casas avançadas
        moverBispo(5);
        printf("\n");

    printf("RAINHA (oito casas para a esquerda)\n");
    //Rainha: Função Recursiva
    moverRainha(8);
    printf("\n");

    // Nível Aventureiro - Movimentando o Cavalo (loops aninhados)
    printf("CAVALO (duas para cima, uma para a direita)\n");
    //Cavalo: Loops aninhados com múltiplas condições
    for (int i = 0; i < 2; i++){
        printf("Baixo\n");
        }
    int j = 0;
    while (j < 1){
        printf("Esquerda\n");
        j++;
    }
    

       

    return 0;
}
