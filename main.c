#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num[20], i, qtd=0, soma=0, n, cont[20], a;
    srand(time(NULL));

    printf("Digite a quantidade de numeros para n sequencia.\n");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        ///printf("%d\n",rand()%100);
        printf("Informe o %d numero \n",i+1);
        scanf("%d",&num[i]);

        if(num[i] % 2 == 0){
            soma+= num[i];
            qtd++;
        }
    }
    printf("A soma dos numeros pares eh %d \n",soma);
    printf("A quantidade de numeros pares digitados foram de %d \n \n",qtd);
    printf("Os numeros pares sao: ",i+1,cont[i]);

   for(i=0; i<n; i++){
      if(num[i] % 2 == 0)
        printf("%d ",num[i]);
    }

}
