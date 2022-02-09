#include <stdio.h>
#include <math.h>

int main(void) {

int cont1=0, cont2=0;
float media, temp, soma=0;

for(int i=1; i<=5; i++){

  printf("Por favor, digite o registro do %dº dia do ano: ", i);
  scanf("%f", &temp);
  cont1++;
  soma+=temp;

  if (temp>27){
    cont2++;
  }
}

media=soma/cont1;

printf("A temperatura média do ano foi: %.1f°", media);
printf("\nA quantidade de dias com temperatura acima de 27° equivale a: %d", cont2);


 

  return 0;
}
