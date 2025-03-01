#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int EscolhaJogador;
    int Bispo = 1; // 5 diagonal superior
    int Torre = 1; // 5 para direita
    int Rainha = 1; // 8 casas para esquerda
    int Mov1Cavalo = 1;
    int Mov2Cavalo; // um movimento, duas casas para cima e uma para esquerda

    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    printf ("Peças disponiveis:\n");
    printf ("1. Bispo\n");
    printf ("2. Torre\n");
    printf ("3. Rainha\n");
    printf ("4. Cavalo\n");
    printf ("Qual peça deseja jogar?\n");
    scanf ("%d", &EscolhaJogador);

    switch (EscolhaJogador)
    {
    case 1:
    while ( Bispo <= 5)
    {
     printf ("Direita, cima\n");
     Bispo++;
    
    }
        break;
      
   
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    case 2:
    
    
    do
    {    
    printf ("Direita\n");
    Torre++;

    } while (Torre <= 5);
    
        break;
       

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    case 3:
    for (Rainha = 1; Rainha <= 8; Rainha++)
    {
        printf ("Esquerda\n");
    }
        break;
        
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
     case 4:

     for (Mov2Cavalo = 1; Mov2Cavalo <= 1; Mov2Cavalo++)
     {
         while (Mov1Cavalo <= 2)
         {
             printf ("Cima\n");
             Mov1Cavalo++;
         }
 
         printf ("Esquerda\n");
 
     }
    default:
    printf ("Opção inválida, Finalizando jogo\n");
        break;

    }      
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
