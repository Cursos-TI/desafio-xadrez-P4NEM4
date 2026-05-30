#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");


int i,j;

// torre move 5 para direita
printf("\n\n---TORRE---\n");

for (i = 1; i <=5 ; i++)
{
    printf("-");
}
printf("> direita\n");



// rainha move 8 para a esquerda
printf("\n---RAINHA---\n");

printf("esquerda <");
for (i = 1; i <= 8; i++)
{
    printf("-");
}
printf("\n");

//bispo move 5 para diagonal direita

printf ("\n---BISPO---\n");
printf("diagonal direita\n");

char mensagem[] = "-----^";
int tamanho = strlen(mensagem);

for (i = tamanho - 1 ; i>=0 ; i--)
{
    for (j = 0 ; j < i; j++)
    {
        printf("  ");
    }
    
printf("%c\n", mensagem[i]);


}
//cavalo





return 0;


}