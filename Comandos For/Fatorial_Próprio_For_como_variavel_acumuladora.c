#include <stdio.h>

int main(void) {
  
  int i,n,fat,aux;

  printf("\nDigite um numero para calcular seu fatorial: \n");
  scanf("%d",&n);

  fat=n;

  for(i=1; i<n; i++){
    printf("\n%d",fat);
    fat=fat*i;
  }
  
  printf("\nO fatorial de %d eh: %d",n,fat);
}

/*  Exemplo com n=5 :

    i=1 n=5 fat=n ==>  fat = 5*1  = 5

    i=2 n=5 fat=n ==>  fat = 5*2  = 10 

    i=3 n=5 fat=n ==>  fat = 10*3 = 30

    i=4 n=5 fat=n ==>  fat = 30*4 = 120

    i=5 n=5 fat=n ==>  Não acontece pois a condição i<n não é mais verdadeira

    Resultado: 120 ==> 5!
*/
