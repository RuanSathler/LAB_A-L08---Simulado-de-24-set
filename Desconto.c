#include <stdio.h>

double LerDouble(){
  double numLido;
  scanf("%lf", &numLido);

  return numLido;
}

int LerInt(){
  int numLido;
  scanf("%d", &numLido);

  return numLido;
}

int main(){

  double acumulado, preco, desconto, precoMinimo;
  int cont;

  desconto = LerDouble();
  precoMinimo = LerDouble();
  acumulado = 0.0;
  
  for(cont=LerInt(); cont>0; cont--){

    preco = LerDouble();
    
    if(preco>=precoMinimo){
        acumulado += preco -(desconto/100)*preco;
    }
    else acumulado +=preco;
  }

  printf("%.2lf\n", acumulado);
  
  return 0;  
}
