#include <stdio.h>

int main(void) {
  
  int n,i,soma=0,aux;

  printf("\n Digite a quantidade de vezes que deseja somar numeros: ");
  scanf("%d",&n);

  for(i=0; i<n; i++){
    printf("\n\n Digite um numero para adicionar na soma: ");
    scanf("%d", &aux);
    soma=aux+soma;
  }

  printf("\n O valor total da soma e: %d", soma);
}
