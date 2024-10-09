#include <stdio.h>

int LerInt(){
  int numLido;
  scanf("%d", &numLido);

  return numLido;
}

int main(void){

  int  qntLinha, qntColuna, contColuna, contLinha;
  
  qntLinha = LerInt();
  qntColuna= LerInt();
  
  for(contColuna = 0; contColuna<qntColuna; contColuna++){
    putchar('#');
  }
  putchar('\n');

  for(contLinha=2; contLinha<qntLinha; contLinha++){
    for(contColuna = 1; contColuna<=qntColuna; contColuna++){
      if(contColuna==1 || contColuna==qntColuna) putchar('#');
      else putchar(' ');
  }
    putchar('\n');
  }

  for(contColuna = 0; contColuna<qntColuna; contColuna++){
    putchar('#');
  }
  putchar('\n');

  return 0;
}
