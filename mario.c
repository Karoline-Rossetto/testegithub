#include <stdio.h>
#include <stdio.h>


int main(void)
{
    int num = 0;
    int i;
    int j;

    // Solicita um número entre 1 e 8
    do
    {
        num = get_int("Digite um numero de 1 a 8: ");
    }while (num< 1 || num > 8);



      for (int i=1;i<= num;i++)
    {
        // Espaços à esquerda (pirâmide esquerda alinhada à direita)
        for (int j = 1; j <= num - i; j++)
        {
            printf(" ");
        }

        // Blocos da pirâmide esquerda
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }

// Espaço entre as pirâmides
printf("  ");

        // Blocos da pirâmide direita (sem espaços)
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }

        // Pula para a próxima linha
        printf("\n");
    }
}
