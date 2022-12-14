#include <stdio.h>
#include <stdlib.h>



int main()
{
    int i, v[10];  // variaveis
    int maior = v[0];

    printf(" Entre com numeros inteiros ate 10:\n");
    scanf("%d",&i);          //guardar os 10 numeros introduzidos

    for(i = 1; i < 10; i++){   // iniciar o ciclo
    scanf("%d", &v[i]);
    if(maior < v[i])    //comparar os  10 numeros na posiçao 0 a 9
    maior = v[i];    //guardar o maior
}
printf("Maior = %d\n", maior);


    return 0;
}

